/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 13:43:45 by jaeshin           #+#    #+#             */
/*   Updated: 2023/08/08 17:03:58 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	print_list(t_stack *stack)
{
	t_node	*temp;

	temp = stack->head;
	while (temp)
	{
		printf("%i\n", temp->value);
		temp = temp->next;
	}
}

int	get_size(t_stack *stack)
{
	t_node	*temp;
	int		i;

	temp = stack->head;
	i = 0;
	while (temp)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
