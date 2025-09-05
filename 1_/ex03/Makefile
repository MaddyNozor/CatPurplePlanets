# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mairivie <mairivie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/02 12:38:51 by mairivie          #+#    #+#              #
#    Updated: 2025/09/05 11:33:27 by mairivie         ###   ########.fr        #
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

.PHONY : all clean re


#NAME      = unnecessary_violence
#CXX       = c++
#CXXFLAGS  = -Wall -Wextra -Werror -std=c++98

#SRCS = main.cpp \       Weapon.cpp \       HumanA.cpp \       HumanB.cpp
#OBJS = $(SRCS:.cpp=.o)

#all: $(NAME)

#$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

#%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

#clean:
	rm -f $(OBJS)

#fclean: clean
	rm -f $(NAME)

#re: fclean all

#.PHONY: all clean fclean re