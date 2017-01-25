#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/* global variables */
int xiter;
int yiter;
int attempti;
int array[9][9];
int xaxis;
int yaxis;
int xlimit;
int ylimit;
int x1;
int y1;

/* functions */
int		fillarray(int argc, int array, char **argv);

int		attempt(int array);

int		display(int array);

int		checkX(int attempti, int yaxis, int array);

int		checkY(int attempti, int xaxis, int array);
