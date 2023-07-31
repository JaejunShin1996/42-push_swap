/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 20:25:44 by jaeshin           #+#    #+#             */
/*   Updated: 2023/07/31 20:25:51 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*generate_node(int value)
{
	t_node	*temp;

	temp = (t_node *)malloc(sizeof(t_node));
	temp->value = value;
	temp->next = NULL;
	temp->prev = NULL;
	return (temp);
}

void	insert_at_head(t_node **head, t_node **tail, int value)
{
	t_node	*new_node;
	
	new_node = generate_node(value);
	if (*tail == NULL)
		*tail = new_node;
	if (*head != NULL)
		(*head)->prev = new_node;
	new_node->next = *head;
	*head = new_node;
}

void	insert_after_node(t_node *node_to_insert_after, t_node *new_node)
{
	new_node->next = node_to_insert_after->next;
	node_to_insert_after->next = new_node;
}

void remove_node(t_node **head, t_node *node_to_remove)
{
    if (*head == NULL || node_to_remove == NULL) {
        return;
    }

    if (*head == node_to_remove)
        *head = node_to_remove->next;
    else 
	{
        if (node_to_remove->prev != NULL)
            node_to_remove->prev->next = node_to_remove->next;
        if (node_to_remove->next != NULL)
            node_to_remove->next->prev = node_to_remove->prev;
    }
    free(node_to_remove);
}