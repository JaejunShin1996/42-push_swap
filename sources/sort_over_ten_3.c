/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_over_ten_3.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 12:13:08 by jaeshin           #+#    #+#             */
/*   Updated: 2023/08/15 12:32:50 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	opt_ss(t_stack *a, t_stack *b, int pivot)
{
	t_node	*a_head;
	t_node	*b_head;

	a_head = a->head;
	b_head = b->head;
	if ((a_head->value > a_head->next->value) 
		&& (b_head->value < b_head->next->value))
	{
		ss(a, b);
	}
	else if (a_head->value > a_head->next->value)
	{
		swap(a, 'a');
	}
	else if (b_head->value < b_head->next->value)
	{
		swap(b, 'b');
	}
}
