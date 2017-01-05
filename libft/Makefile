# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dlemp <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/07 15:41:22 by dlemp             #+#    #+#              #
#    Updated: 2017/01/05 10:51:15 by dlemp            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
CC = gcc

SRC = ft_isascii.c ft_memcmp.c  ft_strchr.c  ft_strlen.c  ft_strrchr.c
ft_atoi.c    ft_isdigit.c ft_memcpy.c  ft_strcmp.c  ft_strncat.c ft_strstr.c
ft_bzero.c   ft_isprint.c ft_memmove.c ft_strcpy.c  ft_strncmp.c ft_tolower.c
ft_isalnum.c ft_memccpy.c ft_memset.c  ft_strdup.c  ft_strncpy.c ft_toupper.c
ft_isalpha.c ft_memchr.c  ft_strcat.c  ft_strlcat.c ft_strnstr.c 

HEADER = libft.h

OBJ = ft_isascii.o ft_memcmp.o  ft_strchr.o  ft_strlen.o  ft_strrchr.o
ft_atoi.o    ft_isdigit.o ft_memcpy.o  ft_strcmp.o  ft_strncat.o ft_strstr.o
ft_bzero.o   ft_isprint.o ft_memmove.o ft_strcpy.o  ft_strncmp.o ft_tolower.o
ft_isalnum.o ft_memccpy.o ft_memset.o  ft_strdup.o ft_strncpy.o ft_toupper.o
ft_isalpha.o ft_memchr.o  ft_strcat.o  ft_strlcat.o ft_strnstr.o 

all: $(NAME)

$(NAME):
		@$(CC) $(CFLAGS) -c $(SRC)
		@ar rc $(NAME) $(OBJ)
		@ranlib $(NAME)
		@echo "\033[32mBuilt library.\033[0m"




clean:
		rm -f $(OBJ)
		@echo "\033[32mCleaned upobject files.\033[0m"

fclean:
		rm -f $(NAME)
		@echo "\033[32mCleaned up compiled files.\033[0m"

re: fclean all
