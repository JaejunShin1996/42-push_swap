/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_over_ten_1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 16:40:17 by jaeshin           #+#    #+#             */
/*   Updated: 2023/08/16 13:15:39 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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

void	sort_over_ten(t_stack *a, t_stack *b, int divider)
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
