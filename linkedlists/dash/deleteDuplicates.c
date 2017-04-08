#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct s_list
{
	int data;
struct s_list *next;
}	t_list;

void listDelete(s_list *listP, s_list *valP)
{
s_list *currP, *prevP;
prevP = NULL;
for (currP = *listP; currP != NULL; prevP = currP, currP = currP->next)
{
	if (currP->data == valP)
	{
