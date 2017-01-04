#include <stdio.h>

struct classes 
{
	char obj1[6];
	char obj2[6];
	char obj3[6];
};

void	printclass1(struct classes class1);

void	printclass2(struct classes class2);

void	printclass1(struct classes class1)
{
	printf(class1.obj1);
	printf(class1.obj2);
	printf(class1.obj3);
}

void	printclass2(struct classes class2)
{
	printf(class2.obj1);
	printf(class2.obj2);
	printf(class2.obj3);
}

int		main()
{
	struct classes class1;
	struct classes class2;

	class1.obj1 = "good";
	class1.obj2 = "bad";
	class1.obj3 = "best";
	class2.obj1 = "hell";
	class2.obj2 = "death";
	class2.obj3 = "pussy";
	printclass1(class1);
	printclass2(class2);
	return (42);
}

