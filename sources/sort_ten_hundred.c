/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_ten_hundred.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 16:40:17 by jaeshin           #+#    #+#             */
/*   Updated: 2023/08/06 21:20:34 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// still fking pivot to be fixed
int	get_pivot(t_stack *a, int chunk)
{
	t_node	*temp;
	t_node	*temp2;
	t_node	*result;

	temp = a->head;
	temp2 = temp->next;
	result = get_smallest(a);
	while (chunk - 1)
	{
		temp = a->head;
		temp2 = temp->next;
		while (temp2)
		{
			if (temp2->value > result->value && temp->value > temp2->value)
			{
				temp = temp2;
				// printf("result - %d\n", result->value);
				// if (result->value >= 40 && result->value < 48)
				// {
				// 	printf("-----------------------\n");
				// 	print_list(a);
				// 	printf("-----------------------\n");
				// }
			}
			temp2 = temp2->next;
		}
		result = temp;
		chunk--;
	}
	printf("pivot - %d\n", result->value);
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

void	sort_a_chunk(t_stack *a, t_stack *b, int chunk)
{
	int	i;

	i = 0;
	while (i < chunk - 3)
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
	sort_a_chunk(a, b, chunk);
	// print_list(b);
	// printf("-bbbbbbbbb-\n");
	// while (b->size)
	// 	sort_b_chunk(a, b);
}
