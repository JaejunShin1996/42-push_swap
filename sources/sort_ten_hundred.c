/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_ten_hundred.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 16:40:17 by jaeshin           #+#    #+#             */
/*   Updated: 2023/08/05 22:34:59 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// to be fixed getting pivot
t_node	*get_pivot(t_stack *a, int quarter)
{
	t_node	*temp;
	t_node	*temp2;
	t_node	*result;

	temp = a->head;
	temp2 = temp->next;
	result = get_smallest(a);
	printf("quarter - %d\n", quarter);
	while (quarter - 1)
	{
		while (temp2->next)
		{
			if (temp->value > temp2->value && temp2->value > result->value)
				temp = temp2;
			temp2 = temp2->next;
			result = temp;
		}
		quarter--;
	}
	printf("pivot - %d\n", result->value);
	return (result);
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
		while (to_head > 0)
		{
			reverse_rotate(a, 'a');
			to_head--;
		}
	}
	push(a, b, 'b');
}

void	push_chunk(t_stack *a, t_stack *b, int quarter)
{
	t_node	*pivot;
	t_node	*temp;

	pivot = get_pivot(a, quarter);
	temp = a->head;
	while (temp)
	{
		if (temp->value <= pivot->value)
			push_below_pivot(a, b, temp);
		temp = temp->next;
	}
}

void	sort_a_chunk(t_stack *a, t_stack *b, int quarter)
{
	int	i;

	i = 3;
	while (i < quarter)
	{
		push_smallest(a, b);
		i++;
	}
	sort_three(a);
	while (quarter)
		push(b, a, 'a');
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
		to_head = to_head - (b->size / 2);
		while (to_head)
		{
			reverse_rotate(b, 'b');
			to_head--;
		}
	}
	push(b, a, 'a');
}

void	sort_ten_hundred(t_stack *a, t_stack *b)
{
	//int	i;
	int	quarter;

	//i = 4;
	quarter = a->size / 4;
	push_chunk(a, b, quarter);
	//printf("--------------------\n");
	//printf("-aaaaaaaaaaa-\n");
	//print_list(a);
	//printf("-bbbbbbbbb-\n");
	//print_list(b);
	//printf("--------------------\n");
	//sort_a_chunk(a, b, quarter);
	//while (b->size)
	//	sort_a_chunk(a, b, quarter);
}
