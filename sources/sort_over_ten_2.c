/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_over_ten_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 16:19:43 by jaeshin           #+#    #+#             */
/*   Updated: 2023/08/16 13:42:08 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_node	*loop_for_small(t_stack *a, int i)
{
	t_node	*temp;
	t_node	*temp2;
	t_node	*result;
	int		smaller_count;

	temp = a->head;
	result = get_smallest(a);
	while (temp)
	{
		smaller_count = 0;
		if (result->value < temp->value)
		{
			temp2 = a->head;
			while (temp2 && i >= smaller_count)
			{
				if (temp->value > temp2->value)
					smaller_count++;
				temp2 = temp2->next;
			}
		}
		if (i == smaller_count)
			result = temp;
		temp = temp->next;
	}
	return (result);
}

int	get_pivot(t_stack *a, int chunk)
{
	t_node	*result;
	int		i;

	i = 1;
	while (i < chunk)
	{
		result = loop_for_small(a, i);
		i++;
	}
	return (result->value);
}

void	push_below_pivot(t_stack *a, t_stack *b, t_node *node)
{
	int	to_head;

	to_head = dis_to_head(node);
	if (to_head < a->size / 2)
	{
		while (to_head)
		{
			rotate(a, 'a');
			to_head--;
		}
	}
	else
	{
		to_head = a->size - to_head;
		while (to_head)
		{
			reverse_rotate(a, 'a');
			to_head--;
		}
	}
	push(a, b, 'b');
}

void	push_chunk(t_stack *a, t_stack *b, int chunk)
{
	int		pivot;
	t_node	*temp;

	pivot = get_pivot(a, chunk);
	temp = a->head;
	while (temp)
	{
		if (temp->value <= pivot)
		{
			push_below_pivot(a, b, temp);
			temp = a->head;
		}
		else
			temp = temp->next;
	}
}
