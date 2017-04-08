#include <stdio.h> /*ahhhhhhhhhh*/

char	*ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

/* TEST MAIN, Q IS FUNC*/
int		main(int argc, char **argv)
{
	char *str1;
	char *str2;
	
	str1 = argv[1];
	str2 = argv[2];
	printf("%s\n",ft_strcpy(str1, str2));
	return (0);
}
