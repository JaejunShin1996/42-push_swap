/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 20:25:44 by jaeshin           #+#    #+#             */
/*   Updated: 2023/08/01 12:13:44 by jaeshin          ###   ########.fr       */
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

int	remove_head(t_stack *stack)
{
	int	value;

	value = stack->head->value;
	if (stack->head == stack->tail)
	{
		stack->head = NULL;
		stack->tail = NULL;
	}
	else
	{
		stack->head = stack->head->next;
		stack->head->prev = NULL;
	}
    return (value);
}
