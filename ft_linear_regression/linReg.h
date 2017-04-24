#ifndef LINREG_H
# define LINREG_H
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>

typedef struct learning_parameter_struct
{
    double theta1;
    double theta2;
    double learning_rate;
    double best_theta1;
    double best_theta2;
    double tot_error;
    int    x_length;
}                   lps;


#endif
