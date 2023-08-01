/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 23:24:03 by jaeshin           #+#    #+#             */
/*   Updated: 2023/08/01 19:21:32 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	int		i;
	t_stack	*stack_a;
	t_stack	*stack_b;

	i = 1;
	if (argc < 2 || !error_handling(argv))
		return (-1);
	stack_a = (t_stack *)malloc(sizeof(t_stack *));
	stack_b = (t_stack *)malloc(sizeof(t_stack *));
	while (argv[i])
		insert_at_head(&stack_a->head, &stack_a->tail, ft_atoi(argv[i++]));

	print_list(&stack_a->head);

	push(stack_a, stack_b, 'b');
	push(stack_a, stack_b, 'b');

	rotate(stack_a, 'a');
	print_list(&stack_a->head);

	reverse_rotate(stack_b, 'b');

	print_list(&stack_a->head);
	printf("-----a stack-----\n");

	print_list(&stack_b->head);
	printf("-----b stack-----\n");

	return (0);
}
