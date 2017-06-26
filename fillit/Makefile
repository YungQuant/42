SRC_NAME = 	ft_check.c ft_core.c ft_read.c ft_tetris_simulator.c\
		   	ft_tetris_utility.c ft_utility.c
OBJ_NAME = $(SRC_NAME:.c=.o)
LIB_NAME = libft

SRC_PATH = ./src/
OBJ_PATH = ./obj/

LIB_PATH = ./libft/
INC_PATH = ./include/ $(LIB_PATH)

SRC      = $(addprefix $(SRC_PATH), $(SRC_NAME))
OBJ      = $(addprefix $(OBJ_PATH), $(OBJ_NAME))
INC      = $(addprefix -I, $(INC_PATH))
LIB      = $(addprefix -L, $(LIB_PATH))

NAME     = fillit
CC       = gcc

CFLAGS = -Wall -Wextra -Werror
LDFLAGS = -lft

all: libft $(NAME)

.PHONY: libft clean fclean re $(NAME)

libft :
	make -C $(LIB_PATH)

$(NAME): libft $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(LIB) $(INC) $(LDFLAGS) -o $(NAME)

$(OBJ_PATH)%.o : $(SRC_PATH)%.c
	@mkdir -p $(OBJ_PATH)
	$(CC) $(CFLAGS) $(INC) -o $@ -c $<

clean :
	@cd ./libft/ && rm *.o ; cd ..
	@$(RM) -v $(OBJ)
	@$(RM) -rv $(OBJ_PATH)

fclean : clean
	@cd ./libft/ && rm libft.a ; cd ..
	@$(RM) -v $(NAME)

re: fclean all
