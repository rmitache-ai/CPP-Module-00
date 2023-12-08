# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmitache <rmitache@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/05 18:41:29 by rmitache          #+#    #+#              #
#    Updated: 2023/12/08 18:46:55 by rmitache         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook
CFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
SRCS = Contact.cpp PhoneBook.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)


all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re:
	rm -rf $(NAME)
	rm -rf $(OBJS)
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)