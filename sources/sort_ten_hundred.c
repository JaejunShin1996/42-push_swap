/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_ten_hundred.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 16:40:17 by jaeshin           #+#    #+#             */
/*   Updated: 2023/08/07 17:35:53 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_pivot(t_stack *a, int chunk)
{
	t_node	*temp;
	t_node	*temp2;
	int		temp_small;
	t_node	*result;
	int		i;
	int		smaller_count;

	result = get_smallest(a);
	temp = a->head;
	i = 1;
	smaller_count = 0;
	while (i < chunk)
	{
		temp = a->head;
		while (temp)
		{
			smaller_count = 0;
			if (result->value < temp->value)
			{
				temp_small = temp->value;
				temp2 = a->head;
				while (temp2 && i >= smaller_count)
				{
					if (temp_small > temp2->value)
						smaller_count++;
					temp2 = temp2->next;
				}
			}
			if (i == smaller_count)
				result = temp;
			temp = temp->next;
		}
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
		{
			temp = temp->next;
		}
	}
}

void	sort_a_chunk(t_stack *a, t_stack *b)
{
	int	i;

	i = 0;
	while (a->size > 3)
	{
		push_smallest(a, b);
		i++;
	}
	sort_three(a);
	while (i > 3)
	{
		push(b, a, 'a');
		i--;
	}
}

void	sort_b_chunk(t_stack *a, t_stack *b)
{
	t_node	*big;
	int		to_head;

	big = get_biggest(b);
	to_head = dis_to_head(big);
	if (to_head < b->size / 2)
	{
		while (to_head)
		{
			rotate(b, 'b');
			to_head--;
		}
	}
	else
	{
		to_head = b->size - to_head;
		while (to_head)
		{
			reverse_rotate(b, 'b');
			to_head--;
		}
	}
	push(b, a, 'a');
}

void	sort_ten_hundred(t_stack *a, t_stack *b, int divider)
{
	int	i;
	int	chunk;

	i = divider - 1;
	chunk = a->size / divider;
	while (i)
	{
		push_chunk(a, b, chunk);
		i--;
	}
	sort_a_chunk(a, b);
	while (b->size)
		sort_b_chunk(a, b);
}
