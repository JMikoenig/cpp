/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jamanzan <jamanzan@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 09:50:10 by jamanzan          #+#    #+#             */
/*   Updated: 2025/10/08 09:53:22 by jamanzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

int main(int argc, char **argv)
{
	std::string	full_string;

	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; ++i)
	{
		std::string current_arg = *(argv + i);
		for (unsigned int j = 0; j < current_arg.length(); ++j)
			current_arg[j] = std::toupper(current_arg[j]);
		full_string += current_arg;
	}
	std::cout << full_string << std::endl;
	return (0);
}