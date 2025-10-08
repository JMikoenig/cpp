# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jamanzan <jamanzan@student.42prague.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/08 09:50:08 by jamanzan          #+#    #+#              #
#    Updated: 2025/10/08 10:04:14 by jamanzan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
SRC = megaphone.cpp

CXX = g++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRC)
	@$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)
	@echo "C++ project $(NAME) compiled successfully."

clean:
	@echo "No object files to clean."

fclean: clean
	@rm -f $(NAME)
	@echo "$(NAME) executable removed."

re: fclean all

.PHONY: all clean fclean re