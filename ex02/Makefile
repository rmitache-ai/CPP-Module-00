# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmitache <rmitache@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/08 18:46:30 by rmitache          #+#    #+#              #
#    Updated: 2023/12/08 18:49:15 by rmitache         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account
CFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
SRCS = Account.cpp main.cpp
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