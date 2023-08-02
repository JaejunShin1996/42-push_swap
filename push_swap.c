/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 23:24:03 by jaeshin           #+#    #+#             */
/*   Updated: 2023/08/02 16:20:15 by jaeshin          ###   ########.fr       */
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
		return (1);
	stack_a = (t_stack *)malloc(sizeof(t_stack *));
	stack_b = (t_stack *)malloc(sizeof(t_stack *));
	generate_stack(argv, &stack_a->head, &stack_a->tail);
	if (sorted(stack_a))
		return (error_sorted(stack_a, stack_b));

	print_list(&stack_a->head);
	printf("---a stack---\n");
	return (0);
}
