# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: josgabri <josgabri@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/12 20:55:42 by josgabri          #+#    #+#              #
#    Updated: 2022/01/24 02:48:53 by josgabri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_itoa.c ft_putchar_fd.c ft_putstr_fd.c \
		ft_strdup.c ft_strjoin.c ft_strlen.c ft_memcpy.c

OBJS		= ${SRCS:.c=.o}

NAME		= libft.a

CC			= gcc

CFLAGS		= -Wall -Werror -Wextra

INCLUDE		= libft.h

RM			= rm -f

LIB 		= ar -rcs

.c.o:
		${CC} ${CFLAGS} -c $< -o $(<:.c=.o)

all:		${NAME}

${NAME}:	${OBJS} ${INCLUDE}
		${LIB} ${NAME} ${OBJS}

clean:
		${RM} ${OBJS}

fclean:		clean
		${RM} ${NAME}

re:		fclean all

git:
		git add .
		git commit -m "comitando"
		git push
