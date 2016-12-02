#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct node {
    int data;
    struct node * next;} t_node;

t_node* makelist()
{
    t_node * head = NULL;
    head = malloc(sizeof(t_node));
    if (!(head)){return (0);}

    head->data = 1;
    
    head->next = malloc(sizeof(t_node));
    head->next->data = 2;
    
    head->next->next = malloc(sizeof(t_node));
    head->next->next->data = 3;

    head->next->next->next = NULL;

    return (head);
}

void    printlist(t_node *head)
{
    t_node *current = head;

    while (current){
        printf("%i\n", current->data);
        current = current->next;}
}

t_node*     appendlist(t_node *head, int newd)
{
    t_node *current = head;
    while (current){current = current->next;}

    current->next = malloc(sizeof(t_node));
    current->next->data = newd;
    current->next->next = NULL;
    return (head);
}

int     main(int argc, char **argv)
{
    printlist(appendlist(makelist(), 4));
    return (0);
}

