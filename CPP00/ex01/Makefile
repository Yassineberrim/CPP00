# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yberrim <yberrim@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/31 20:55:51 by yberrim           #+#    #+#              #
#    Updated: 2023/11/04 16:52:44 by yberrim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GCC = g++
GCCFLAGS = -std=c++11 -Wall -Wextra -Werror

NAME = phonebook
SRCS = phonebook.cpp contact.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)
all: $(NAME)
$(NAME): $(OBJS)
	$(GCC) $(GCCFLAGS) -o $(NAME) $(OBJS)
%.o: %.cpp
	$(GCC) $(GCCFLAGS) -c $< -o $@
clean:
	rm -f $(TARGET) $(OBJS) $(NAME)