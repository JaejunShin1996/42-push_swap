/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 12:37:27 by jaeshin           #+#    #+#             */
/*   Updated: 2023/08/08 17:03:49 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	dis_to_tail(t_node *node)
{
	t_node	*temp;
	int		i;

	temp = node;
	i = 0;
	while (temp->next)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}

int	dis_to_head(t_node *node)
{
	t_node	*temp;
	int		i;

	temp = node;
	i = 0;
	while (temp->prev)
	{
		temp = temp->prev;
		i++;
	}
	return (i);
}

t_node	*get_biggest(t_stack *stack)
{
	t_node	*temp;
	t_node	*temp2;

	temp = stack->head;
	temp2 = temp->next;
	while (temp2)
	{
		if (temp->value < temp2->value)
			temp = temp2;
		temp2 = temp2->next;
	}
	return (temp);
}

t_node	*get_smallest(t_stack *stack)
{
	t_node	*temp;
	t_node	*temp2;

	temp = stack->head;
	temp2 = temp->next;
	while (temp2)
	{
		if (temp2->value < temp->value)
			temp = temp2;
		temp2 = temp2->next;
	}
	return (temp);
}
