# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cyelena <cyelena@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/08 10:43:47 by cyelena           #+#    #+#              #
#    Updated: 2021/10/23 20:14:03 by cyelena          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
		ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
		ft_strlcat.c  ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c\
		ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c\
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c ft_strmapi.c ft_split.c\
		ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
		

OBJ = ${patsubst %.c,%.o,$(SRCS)}
D_FILES = ${patsubst %.c,%.d,$(SRCS)}

CC = gcc
FLAGS = -Wall -Werror -Wextra
OPTFLAGS = -O2
RM = @rm -f

all: ${NAME}

${NAME}: ${OBJ}
	ar rcs ${NAME} $?

%.o : %.c
	${CC} ${FLAGS} ${OPTFLAGS} -c $< -o $@ -MD
		
include $(wildcard $(D_FILES))

clean:
	${RM} ${OBJ} ${D_FILES}

fclean: clean 
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
