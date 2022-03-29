# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: minsunki <minsunki@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/15 13:09:39 by minsunki          #+#    #+#              #
#    Updated: 2022/03/29 23:12:23 by minsunki         ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

NAME			=		convert

SRCF			=		.	

FIL_M			=		main

SRCS_M			=		$(addsuffix .cpp, $(FIL_M))

OBJS_M			=		$(SRCS_M:.cpp=.o)

CC				=		clang++
WFLAG			=		-Wall -Wextra -Werror
CPPFLAG			=		-std=c++98 -pedantic
RM				=		rm -f

%.o				:		%.cpp
						$(CC) $(WFLAG) $(CPPFLAG) -c $< -o $@

$(NAME)         :		$(OBJS_M)
						$(CC) $(OBJS_M) $(WFLAG) $(CPPFLAG) -o $(NAME)

clean           :
						$(RM) $(OBJS_M)

all				:		$(NAME)

fclean          :		clean
						$(RM) $(NAME)

re				:		fclean all

.PHONY          :		.c.o all clean fclean re