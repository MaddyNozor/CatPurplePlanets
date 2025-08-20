# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/01 17:01:30 by mairivie          #+#    #+#              #
#    Updated: 2025/08/01 17:01:31 by mairivie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
EXEC_NAME = tiny_phonebook
SRC = Contact.class.cpp Phonebook.class.cpp main.cpp


$(EXEC_NAME) : $(SRC)
	$(CC) $(CFLAGS) -o $(EXEC_NAME) $(SRC)

%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

all : $(EXEC_NAME)

clean :
	rm $(EXEC_NAME)

re : clean all

.phony : all clean re