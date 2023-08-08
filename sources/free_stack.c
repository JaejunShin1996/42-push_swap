/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 12:00:35 by jaeshin           #+#    #+#             */
/*   Updated: 2023/08/08 12:19:30 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_stack(t_stack *stack)
{
	t_node	*node;
	t_node	*next;

	node = stack->head;
	while (node)
	{
		if (node->next)
			next = node->next;
		free(node);
		if (node->next)
			node = next;
		else
			break ;
	}
}