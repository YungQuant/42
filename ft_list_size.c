list_t * head = NULL;
head = malloc(sizeof(list_t));
if (head == NULL)
	return (0);
head->data = 1;
head->next = malloc(sizeof(t_list));
head->next->data = 2;
head->next->next = malloc(sizeof(t_list));
head->next->next->data = 3;

void	printlist(list_t * head)
{
	list_t * current;
	current = head;
	while (current)
	{
		printf("%i\n", current->data);
		current = current->next;
	}
}

int		main();
{
	printlist(head);
	return (0);
}
