# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emende <emende@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/29 15:19:20 by emende            #+#    #+#              #
#    Updated: 2021/12/05 22:13:10 by emende           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_atoi.c ft_bzero.c ft_intlen.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
	   ft_isdigit.c ft_isprint.c ft_isspace.c ft_itoa.c ft_memalloc.c \
	   ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memdel.c \
	   ft_memmove.c ft_memset.c ft_putchar.c ft_putchar_fd.c ft_putendl.c \
	   ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c \
	   ft_strcat.c ft_strchr.c ft_strclen.c ft_strclr.c ft_strcmp.c \
	   ft_strcpy.c ft_strdel.c ft_strdup.c ft_strequ.c ft_striter.c \
	   ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlen.c ft_strmap.c \
	   ft_strmapi.c ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnequ.c \
	   ft_strnew.c ft_strnstr.c ft_strrchr.c ft_strsplit.c ft_strstr.c \
	   ft_strsub.c ft_strtrim.c ft_tolower.c ft_toupper.c

OBJS = ft_atoi.o ft_memalloc.o ft_putendl.o ft_strcmp.o ft_strmap.o \
	   ft_strstr.o ft_bzero.o ft_memccpy.o ft_putendl_fd.o ft_strcpy.o \
	   ft_strmapi.o ft_strsub.o ft_intlen.o ft_memchr.o ft_putnbr.o \
	   ft_strdel.o ft_strncat.o ft_strtrim.o ft_isalnum.o ft_memcmp.o \
	   ft_putnbr_fd.o ft_strdup.o ft_strncmp.o ft_tolower.o ft_isalpha.o \
	   ft_memcpy.o ft_putstr.o ft_strequ.o ft_strncpy.o ft_toupper.o \
	   ft_isascii.o ft_memdel.o ft_putstr_fd.o ft_striter.o ft_strnequ.o \
	   ft_isdigit.o ft_memmove.o ft_strcat.o ft_striteri.o ft_strnew.o \
	   ft_isprint.o ft_memset.o ft_strchr.o ft_strjoin.o ft_strnstr.o \
	   ft_isspace.o ft_putchar.o ft_strclen.o ft_strlcat.o ft_strrchr.o \
	   ft_itoa.o ft_putchar_fd.o ft_strclr.o ft_strlen.o ft_strsplit.o

OPTIONS = -c

CFLAG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc $(CFLAG) $(OPTIONS) $(SRCS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
