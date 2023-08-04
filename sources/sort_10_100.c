/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_10_100.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 16:40:17 by jaeshin           #+#    #+#             */
/*   Updated: 2023/08/04 18:09:51 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	pivot_number(t_stack *a, int size)
{
	t_node	*temp;
	int		result;
	int		next_small;

	temp = a->head;
	result = get_smallest(a);
	next_small = temp->value;
	while (size)
	{
		while (temp)
		{
			if (temp->value > result)
			{
				if (temp->value < next_small)
				//here to start
			}
			temp = temp->next;
		}
		size--;
	}
}

void	sort_ten_hundred(t_stack *a, t_stack *b)
{
	t_node	*smallest;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < a->size / 4)
		{

			j++;
		}
		i++;
	}
}
