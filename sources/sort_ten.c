/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_ten.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 19:01:35 by jaeshin           #+#    #+#             */
/*   Updated: 2023/08/15 16:55:28 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push_smallest(t_stack *a, t_stack *b)
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
		push_smallest(a, b);
	sort_three(a);
	while (b->size)
		push(b, a, 'a');
}
