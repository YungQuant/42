# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dlemp <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/07 15:41:22 by dlemp             #+#    #+#              #
#    Updated: 2016/11/08 17:25:46 by dlemp            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
CC = gcc
SRC = srcs/ft_*.c
HEADER = ./includes/
OBJ = $(SRC:ft_*.o)

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
