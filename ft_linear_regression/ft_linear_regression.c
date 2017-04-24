#include "linReg.h"

double activation(double in, lps *l_p_s)
{
    return (double)(l_p_s->theta1 + (l_p_s->theta2 * in));
}

lps *optimize(lps *l_p_s, double *X, double *Y)
{
    sleep(1);
    printf("Fitting optimal theta1 & theta2 using (OLS?) linear regression\n\n");
    sleep(5);
    int i = 0;
    double tmp_theta1, tmp_theta2, diff, best_diff, predict;
    best_diff = 100;
    while(X[i])
    {
        predict = activation(X[i], l_p_s);
        diff = predict - Y[i];
        if (diff < 0)
            diff *= -1;
        l_p_s->tot_error += diff / X[i];
        //printf("X: %lf Predicted: %lf Y: %lf Percent Difference: %lf\n", X[i], predict, Y[i], diff / X[i]);
        tmp_theta1 = l_p_s->learning_rate * diff;
        tmp_theta2 = l_p_s->learning_rate * (diff * X[i]);
        //printf("Adjusting theta1: %lf theta2: %lf\n", tmp_theta1, tmp_theta2);
        l_p_s->theta1 = tmp_theta1;
        l_p_s->theta2 = tmp_theta2;
        if (diff / X[i] < best_diff)
        {
            printf("New Sub-Minima Found @ theta1: %lf theta2: %lf\n", tmp_theta1, tmp_theta2);
            printf("Percent Error @ sub-minima: %lf\n", diff / X[i]);
            l_p_s->best_theta1 = tmp_theta1;
            l_p_s->best_theta2 = tmp_theta2;
            best_diff = diff / X[i];
            sleep(1);
        }
        i++;
    }
    return l_p_s;
}

double *file2array(char *file_name, lps *l_p_s)
{
    printf("Reading training data to array\n");
    int len = 0;
    int line_count = 0;
    char *curr;
    double curr_num;
    FILE *fp;
    char ch;
    fp = fopen(file_name, "r");
    while(!feof(fp))
    {
        ch = fgetc(fp);
        if(ch == '\n')
            line_count++;
    }
    fclose(fp);
    fp = fopen(file_name, "r");
    double *array = malloc(sizeof(double) * line_count);
    l_p_s->x_length = line_count;
    //printf("File Length: %i lines\n", line_count);
    while(fscanf(fp, "%lf", &curr_num) != EOF)
    {
        array[len] = curr_num;
        len++;
    }
    fclose(fp);
    return array;
}

double *format_y(double *dataset)
{
    sleep(1);
    printf("Generating Y training set\n");
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
    printf("ft_linear_regression by dlemp aka yungquant\n");
    if(argc < 2 || argc > 4)
    {
        printf("Parameter Error\n");
        printf("For Prediction Please Use \"-p <X value>\" -or- \"-p <X value> <theta1> <theta2>\"\n");
        printf("For Training Please Use \"-t <filepath> <learning_rate>\"\n");
        printf("Sample Usage: ./ftLinearRegression.out -t BITSTAMP_USD_BTC.txt 0.0000008\n");
        return 0;
    }
    double *X; double *Y;
    lps *l_p_s;
    if(!(l_p_s = (lps *)malloc(sizeof(lps))))
    {
        printf("learning_parameter_struct malloc failure");
        return 0;
    }
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
        return 0;
    }
    if(strncmp(argv[1], "-t", 2) == 0)
    {
	    printf("\nTraining / Hyper-Parameter Optimization Mode \n");
	    sleep(1);
        printf("Reading %s\n", argv[2]);
        sleep(1);
        printf("Setting Learning Rate: %lf\n", strtod(argv[3], NULL));
        sleep(1);
        l_p_s->learning_rate = strtod(argv[3], NULL);
        double *dataset;
        dataset = file2array(argv[2], l_p_s);
        X = dataset;
        Y = format_y(dataset);
        l_p_s = optimize(l_p_s, X, Y);
        printf("\navg_percent_error: %lf\n", l_p_s->tot_error / l_p_s->x_length);
        printf("\nOptimal Activation Rates\n theta1: %lf\n theta2: %lf\n", l_p_s->best_theta1, l_p_s->best_theta2);
        return 0;
    }
    return 0;
}
