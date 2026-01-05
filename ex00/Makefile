# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lomont <lomont@student.42lehavre.fr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/05 22:16:30 by lomont            #+#    #+#              #
#    Updated: 2026/01/05 22:17:58 by lomont           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = StartWithTemplates

C++ = g++-15
CFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

SRC = ./main.cpp \

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(C++) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(C++) $(CFLAGS) -c $< -o $@

make: make all

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY : all clean fclean re
