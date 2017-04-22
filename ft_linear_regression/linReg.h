#ifndef LINREG_H
# define LINREG_H
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "read_utils.c"
#include <fcntl.h>

typedef struct learning_parameter_struct
{
    double theta1;
    double theta2;
    double learning_rate;
    double best_theta1;
    double best_theta2;
}                   lps;


#endif
