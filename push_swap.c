/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 16:54:00 by jaeshin           #+#    #+#             */
/*   Updated: 2023/07/25 12:52:38 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	stack_a;
	t_stack	stack_b;
	int		i;

	i = 0;
	if (argc < 1)
		return (0);
	if (!check_validity(++argv) || argc < 1)
		return (0);
	stack_a = stack_numbers(argv, 'a');
	stack_b = stack_numbers(argv, 'b');
	if (stack_a.top)
		printf("a top - %i\n", *stack_a.top);
	if (!stack_b.top)
		printf("b top - %p\n", stack_b.top);
	return (0);
}
