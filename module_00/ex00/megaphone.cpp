#include <iostream>
#include <string>
#include <cctype>

int main(int argc, char **argv)
{
	std::string	full_string;

	if (argc < 2)
	{
		std::cout << "No arguments provided." << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; ++i)
	{
		std::string current_arg = *(argv + i);
		for (int j = 0; j < current_arg.length(); ++j)
			current_arg[j] = std::toupper(current_arg[j]);
		full_string += current_arg;
	}
	std::cout << full_string << std::endl;
	return (0);
}