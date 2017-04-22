#include "linReg.h"

double activation(double in, lps *l_p_s)
{
    return (double)(l_p_s->theta1 + (l_p_s->theta2 * in));
}

lps *optimize(struct learning_parameter_struct *l_p_s, double *X, double *Y)
{
    int i = 0;
    double tmp_theta1, tmp_theta2, diff, best_diff, predict;
    while(X[i])
    {
        predict = activation(X[i], l_p_s);
        diff = predict - Y[i];
        printf("X: %lf Predicted: %lf Y: %lf Difference: %lf\n", X[i], predict, Y[i], diff);
        tmp_theta1 = l_p_s->learning_rate * diff;
        tmp_theta2 = l_p_s->learning_rate * (diff * X[i]);
        l_p_s->theta1 = tmp_theta1;
        l_p_s->theta2 = tmp_theta2;
        if (diff < 0)
            diff *= -1;
        if (diff < best_diff)
        {
            printf("New Sub-Minima Found @ theta1: %lf theta2: %lf\n", tmp_theta1, tmp_theta2);
            l_p_s->best_theta1 = tmp_theta1;
            l_p_s->best_theta2 = tmp_theta2;
            best_diff = diff;
        }
        i++;
    }
    return l_p_s;
}

double *file2array(FILE *fp)
{
    int len = 0;
    double curr;
    while(fscanf(fp, "%lf", &curr) != EOF)
    {
        len++;
    }
    double *array = malloc(sizeof(double) * len);
    len = 0;
    while(fscanf(fp, "%lf", &curr) != EOF)
    {
        array[len] = curr;
        len++;
    }
    return array;
}

double *format_y(double *dataset)
{
    int len = 0;
    while(dataset[len])
        len++;
    double *Y = malloc(sizeof(double) * len + 1);
    Y[0] = dataset[0];
    len = 0;
    while(dataset[len])
    {
        Y[len + 1] = dataset[len];
        len++;
    }
    return Y;
}

int main(int argc, char **argv)
{
    double *X; double *Y;
    lps *l_p_s = (lps*)malloc(sizeof(lps));
    l_p_s->theta1 = 0;
    l_p_s->theta2 = 0;
    if(strncmp(argv[1], "-p", 2) == 0)
    {
        printf("\n Prediction Mode \n");
        if (argv[3] && argv[4])
        {
            printf("Setting theta1: %s theta2: %s\n", argv[3], argv[4]);
            l_p_s->theta1 = strtod(argv[3], NULL);
            l_p_s->theta2 = strtod(argv[4], NULL);
        }
        printf("Predicted: %lf\n", activation(strtod(argv[2], NULL), l_p_s));
    }
    if(strncmp(argv[1], "-t", 2) == 0)
    {
        int fd = open(argv[2], O_RDONLY);
        FILE *fp = fdopen(fd, "r");
        printf("\n Training / Hyper-Parameter Optimization Mode \n");
        printf("Setting Learning Rate: %lf", strtod(argv[3], NULL));
        double *dataset = file2array(fp);
        X = dataset;
        Y = format_y(dataset);
        l_p_s = optimize(l_p_s, X, Y);
        printf("Best theta1: %lf theta2: %lf\n", l_p_s->best_theta1, l_p_s->best_theta2);
    }
    else
    {
        printf("Parameter Error\n");
        printf("For Prediction Please Use \"-p <X value>\" -or- \"-p <X value> <theta1> <theta2>\"\n");
        printf("For Training Please Use \"-t <filepath> <learning_rate>\"\n");
    }
    return 0;
}
