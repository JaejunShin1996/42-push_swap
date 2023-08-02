/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 15:38:10 by jaeshin           #+#    #+#             */
/*   Updated: 2023/08/02 19:04:44 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	sort_three_case1(t_stack *a)
{
	t_node	*first;
	t_node	*second;
	t_node	*third;

	first = a->head;
	second = first->next;
	third = second->next;
	if ((first->value < second->value && first->value < third->value))
	{
		if (second->value > third->value)
			return (1);
	}
	if ((first->value > second->value && first->value < third->value))
	{
		if (second->value < third->value)
			return (2);
	}
	else if ((first->value < second->value && first->value > third->value))
	{
		if (second->value > third->value)
			return (3);
	}
	return (0);
}

int	sort_three_case2(t_stack *a)
{
	t_node	*first;
	t_node	*second;
	t_node	*third;

	first = a->head;
	second = first->next;
	third = second->next;
	if ((first->value > second->value && first->value > third->value))
	{
		if (second->value > third->value)
			return (4);
	}
	if ((first->value > second->value && first->value > third->value))
	{
		if (second->value < third->value)
			return (5);
	}
	return (0);
}

void	sort_three(t_stack *a)
{
	if (sort_three_case1(a) == 1)
	{
		reverse_rotate(a, 'a');
		swap(a, 'a');
	}
	else if (sort_three_case1(a) == 2)
		swap(a, 'a');
	else if (sort_three_case1(a) == 3)
		reverse_rotate(a, 'a');
	else if (sort_three_case2(a) == 4)
	{
		swap(a, 'a');
		reverse_rotate(a, 'a');
	}
	else if (sort_three_case2(a) == 5)
		rotate(a, 'a');
}
