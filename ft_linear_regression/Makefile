NAME = lin_reg
CFLAGS += -Wall -Wextra -Werror
CC = gcc
SRC += ft_linear_regression.c read_utils.c
HEADER = linReg.h
OBJ = $(SRC: .c = .o)

all: $(NAME)
%.o : %.c
	$(CC) $(CFLAGS) -c $(SRC)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
	ranlib $(NAME)
	echo "Built ft_linear_regression"

clean:
	rm -f $(OBJ)
	echo "Cleaned object files"

fclean: clean
	rm -f $(NAME)
	echo "Cleaned compiled files"

re: fclean all
	make
