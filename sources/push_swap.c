/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 23:24:03 by jaeshin           #+#    #+#             */
/*   Updated: 2023/08/09 10:57:07 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (error_handling(argv) || argc < 3)
		return (0);
	stack_a = malloc(sizeof(t_stack *) + sizeof(t_node));
	stack_b = malloc(sizeof(t_stack *) + sizeof(t_node));
	if (!stack_a || !stack_b)
		return (error_allocation_sorted(stack_a, stack_b));
	generate_stack(argv, stack_a, stack_b);
	if (sorted(stack_a))
		return (error_allocation_sorted(stack_a, stack_b));
	sort_stack(stack_a, stack_b);
	free_stack(stack_a);
	free_stack(stack_b);
	return (0);
}

// print_list(stack_a);
// printf("_\na\n");
// printf("----------------\n");
// printf("----------------\n");
// print_list(stack_a);
// printf("_\na\n");
// print_list(stack_b);
// printf("_\nb\n");