/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linkedlist1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlemp <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 19:51:16 by dlemp             #+#    #+#             */
/*   Updated: 2016/11/10 03:11:40 by dlemp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

typedef struct s_list
{
	int data;
	struct s_list * next;
} t_list;


t_list *head = (t_list *)malloc(sizeof(t_list));
if (head == NULL)
	return (1);
head->data = 1;
head->next = malloc(sizeof(t_list));
head->next->data = 2;
head->next->next = malloc(sizeof(t_list));
head->next->next->data = 3;
head->next->next->next = NULL;

void	listshit(t_list * head)
{
	t_list * current = head;

	while (current)
	{
		printf("%d", current->data);
		current = current->next;
	}
}

int		main()
{
	listshit(head);
	return (42);
}
