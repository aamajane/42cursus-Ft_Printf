# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aamajane <aamajane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/19 19:23:57 by aamajane          #+#    #+#              #
#    Updated: 2022/04/16 00:05:16 by aamajane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

SRCS	=	srcs/ft_printf.c \
			srcs/ft_utils_1.c \
			srcs/ft_utils_2.c

OBJS	=	$(SRCS:.c=.o)

ICLS	=	ft_printf.h

CC		=	cc

CFLAGS	=	-Wall -Wextra -Werror

LIB		=	ar -rcs

RM		=	rm -f


all:		$(NAME)

$(NAME):	$(OBJS)
			@$(LIB) $(NAME) $(OBJS)

.c.o:
			@${CC} ${CFLGS} -c $< -o ${<:.c=.o}

clean:
			@$(RM) $(OBJS)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all

.PHONY:		all bonus clean fclean re
