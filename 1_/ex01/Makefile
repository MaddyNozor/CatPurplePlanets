# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/01 17:26:18 by mairivie          #+#    #+#              #
#    Updated: 2025/09/01 17:45:26 by mairivie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
EXEC_NAME = moarbrainZ
SRC = main.cpp Zombie.cpp zombieHorde.cpp
#OBJ = $(SRC:.cpp = .o)

$(EXEC_NAME) : $(SRC)
	$(CC) $(CFLAGS) -o $(EXEC_NAME) $(SRC)

%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

all : $(EXEC_NAME)

clean :
	rm -f $(EXEC_NAME)

re : clean all

.PHONY : all clean re