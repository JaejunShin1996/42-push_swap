/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 19:01:35 by jaeshin           #+#    #+#             */
/*   Updated: 2023/08/03 18:33:14 by jaeshin          ###   ########.fr       */
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

void	sort_five(t_stack *a, t_stack *b)
{
	push_big(a, b);
	push_small(a, b);
	sort_three(a);
	push(b, a, 'a');
	push(b, a, 'a'); //here to be fixed
	reverse_rotate(a, 'a');
}
