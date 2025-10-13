# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/09 14:24:55 by mairivie          #+#    #+#              #
#    Updated: 2025/10/13 11:52:44 by mairivie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP       = c++
CPPFLAGS  = -Wall -Wextra -Werror -std=c++98

NAME = animals
SRCS = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp
OBJ_DIR = obj
OBJS = $(addprefix $(OBJ_DIR)/, $(SRCS:.cpp=.o))

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: %.cpp
	@if [ ! -d obj ]; then mkdir -p $(@D); echo "mkdir -p $(@D)" ; fi
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	@if [ -d obj ]; then rm -r obj; echo "rm -r obj" ; fi

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re