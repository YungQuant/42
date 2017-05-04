#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char **argv)
{

	if(argc == 2 && strncmp(argv[1], "-init", 5) == 0)
	{
        char *char_in;
        int int_in;
        char_in = malloc(sizeof(char) * 2);
		printf("Please use -c to create, -r to read, -u to update, and -d to delete\n");
        while(1)
        {
            scanf("%s2", char_in);
            if(strncmp(char_in, "-c", 2) == 0)
            {
                printf("Please enter int to create & store\n");
                scanf("%i", &int_in);
                printf("Stored int: %i\n", int_in);
            }
            else if(strncmp(char_in, "-r", 2) == 0)
            {
                if(int_in)
                    printf("Data in storage: %i\n", int_in);
                else
                    printf("No data stored yet\n");
            }
            else if(strncmp(char_in, "-u", 2) == 0)
            {
                printf("Please enter new int to store\n");
                scanf("%i", &int_in);
                printf("Updated stored int to: %i\n", int_in);
            }
            else if(strncmp(char_in, "-d", 2) == 0)
            {
                if(int_in)
                    printf("Deleting int: %i\n", int_in);
                else
                    printf("No int to erase\n");
                int_in = 0;
            }
            else
                printf("Incorrect Flag\n");
        }
	}
	else
	{
		printf("Parameter error: please use -init to initialize\n");
		return 0;
	}
	return 0;
}
