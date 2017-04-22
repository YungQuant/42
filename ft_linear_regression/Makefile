NAME = ftLinearRegression.out
CFLAGS += -Wall -Wextra -Werror
CC = gcc
SRC += ft_linear_regression.c
HEADER = linReg.h
OBJ = $(SRC: .c=.o)

%.o : %.c $(HEADER)
	$(CC) -c -o $@ $< $(CFLAGS)

all: $(OBJ)
	$(CC) -o $(NAME) $(OBJ)
	echo "Built ft_linear_regression"

