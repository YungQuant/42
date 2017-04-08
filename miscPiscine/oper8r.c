#include <stdlib.h>

int		oper8r(char *s1, char *op, char *s2)
{
	int num1;
	int num2;
	int num3;

	num1 = atoi(s1);
	num2 = atoi(s2);

	if (*op == '+')
		num3 = num1 + num2;
	if (*op == '-')
		num3 = num1 - num2;
	if (*op == '*')
		num3 = num1 * num2;
	if  (*op == '/')
		num3 = num1 / num2;
	if (*op == '%')
		num3 = num1 % num2;
	return (num3);
}
