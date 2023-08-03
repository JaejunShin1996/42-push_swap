/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 13:20:28 by jaeshin           #+#    #+#             */
/*   Updated: 2023/08/03 14:44:51 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	dis_to_tail(t_node *node)
{
	t_node	*temp;
	int		i;

	temp = node;
	i = 0;
	while (temp)
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
	while (temp)
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

void	sort_big_small(t_stack *a, t_stack *b)
{
	t_node	big;
	t_node	small;
	int		to_tail;
	int		to_head;

	
}

void	sort(t_stack *a, t_stack *b)
{
	
}
