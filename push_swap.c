/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 23:24:03 by jaeshin           #+#    #+#             */
/*   Updated: 2023/07/31 20:27:14 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	int		i;
	t_stack	*stack_a;
	t_stack	*stack_b;
	t_node	*node;

	i = 1;
	if (argc < 2)
		return (-1);
	stack_a = (t_stack *)malloc(sizeof(t_stack *));
	stack_b = (t_stack *)malloc(sizeof(t_stack *));
	while (argv[i])
		insert_at_head(&stack_a->head, &stack_a->tail, ft_atoi(argv[i++]));

	swap(&stack_a->head, 'a');
	node = stack_a->head;
	while (node)
	{
		printf("%i\n", node->value);
		node = node->next;
	}
	
	printf("stack\n");
	
	node = stack_a->tail;
	swap(&stack_a->head, 'a');
	while (node)
	{
		printf("%i\n", node->value);
		node = node->prev;
	}
	
	return (0);
}
