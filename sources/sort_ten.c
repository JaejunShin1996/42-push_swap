/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 19:01:35 by jaeshin           #+#    #+#             */
/*   Updated: 2023/08/04 16:10:44 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_big(t_stack *a, t_stack *b)
{
	t_node	*big;
	int		to_head;

	big = get_biggest(a);
	to_head = dis_to_head(big);
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
		to_head = to_head - (a->size / 2);
		while (to_head)
		{
			reverse_rotate(a, 'a');
			to_head--;
		}
	}
	push(a, b, 'b');
}

void	push_small(t_stack *a, t_stack *b)
{
	t_node	*small;
	int		to_head;

	small = get_smallest(a);
	to_head = dis_to_head(small);
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

void	sort_ten(t_stack *a, t_stack *b)
{
	while (3 < a->size)
		push_small(a, b);
	sort_three(a);
	while (b->size)
		push(b, a, 'a');
}
