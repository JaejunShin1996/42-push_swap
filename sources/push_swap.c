/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 23:24:03 by jaeshin           #+#    #+#             */
/*   Updated: 2023/08/16 16:22:31 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char *argv[])
{
	char	**input;
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (argc == 1)
		return (0);
	else if (argc == 2)
		input = ft_split(argv[1], ' ');
	else
		input = argv_to_input(argv, argc);
	if (error_handling(input))
		input_error(input);
	stack_a = malloc(sizeof(t_stack *) + sizeof(t_node));
	stack_b = malloc(sizeof(t_stack *) + sizeof(t_node));
	if (!stack_a || !stack_b)
		error_allocation(stack_a, stack_b, input);
	generate_stack(input, stack_a, stack_b);
	sort_stack(stack_a, stack_b);
	free_input(input);
	return (0);
}
