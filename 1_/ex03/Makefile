# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/02 12:38:51 by mairivie          #+#    #+#              #
#    Updated: 2025/09/02 12:39:50 by mairivie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
EXEC_NAME = peace_n_love
SRC = main.cpp
#OBJ = $(SRC:.cpp = .o)

$(EXEC_NAME) : $(SRC)
	$(CC) $(CFLAGS) -o $(EXEC_NAME) $(SRC)

%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

all : $(EXEC_NAME)

clean :
	rm -f $(EXEC_NAME)

re : clean all

.phony : all clean re