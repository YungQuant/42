# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dlemp <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/07 15:41:22 by dlemp             #+#    #+#              #
#    Updated: 2017/01/11 16:15:41 by dlemp            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS += -Wall -Wextra -Werror
CC = gcc

SRC += ft_isascii.c ft_memcmp.c  ft_strchr.c  ft_strlen.c  ft_strrchr.c \
ft_atoi.c    ft_isdigit.c ft_memcpy.c  ft_strcmp.c  ft_strncat.c ft_strstr.c \
ft_bzero.c   ft_isprint.c ft_memmove.c ft_strcpy.c  ft_strncmp.c ft_tolower.c \
ft_isalnum.c ft_memccpy.c ft_memset.c  ft_strdup.c  ft_strncpy.c ft_toupper.c \
ft_isalpha.c ft_memchr.c  ft_strcat.c  ft_strlcat.c ft_strnstr.c \
ft_memalloc.c ft_putendl.c ft_putstr.c ft_strequ.c ft_strmap.c ft_strsplit.c ft_memdel.c ft_putendl_fd.c ft_putstr_fd.c ft_striter.c ft_strmapi.c ft_strsub.c  \
ft_intlen.c ft_putchar.c ft_putnbr.c ft_strclr.c ft_striteri.c ft_strnequ.c ft_strtrim.c \
ft_itoa.c ft_putchar_fd.c ft_putnbr_fd.c ft_strdel.c ft_strjoin.c ft_strnew.c ft_wordcount.c

HEADER = libft.h

OBJ = $(SRC:.c=.o)

all: $(NAME)

%.o : %.c
	$(CC) $(CFLAGS) -c $(SRC)

$(NAME): $(OBJ)
		ar rcs $(NAME) $(OBJ)
		ranlib $(NAME)
		echo "\033[32mBuilt library.\033[0m"

clean:
		rm -f $(OBJ)
		echo "\033[32mCleaned upobject files.\033[0m"

fclean: clean
		rm -f $(NAME)
		echo "\033[32mCleaned up compiled files.\033[0m"

re: fclean all
