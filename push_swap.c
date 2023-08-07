/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 23:24:03 by jaeshin           #+#    #+#             */
/*   Updated: 2023/08/07 17:38:02 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (argc < 2 || !error_handling(argv))
		return (1);
	stack_a = (t_stack *)malloc(sizeof(t_stack *) + sizeof(t_node));
	stack_b = (t_stack *)malloc(sizeof(t_stack *) + sizeof(t_node));
	if (!stack_a || !stack_b)
		return (1);
	generate_stack(argv, stack_a, stack_b);
	if (sorted(stack_a))
		return (1);

	// print_list(stack_a);
	// printf("_\na\n");
	// printf("----------------\n");
	sort_stack(stack_a, stack_b);
	// printf("--------------------\n");
	// print_list(stack_a);
	// printf("-aaaaaaaaa-\n");
	// print_list(stack_b);
	// printf("-bbbbbbbbb-\n");
	free(stack_a);
	free(stack_b);
	return (0);
}
