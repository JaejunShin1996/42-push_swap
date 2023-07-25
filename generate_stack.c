/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 11:04:50 by jaeshin           #+#    #+#             */
/*   Updated: 2023/07/25 14:35:02 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_validity(char *input[])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (input[i])
	{
		while (input[i][j])
		{
			if (!ft_isdigit(input[i][j]))
			{
				ft_putendl_fd("ERROR", 2);
				return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int	arg_count(char	*argv[])
{
	int	i;

	i = 0;
	while (argv[i])
		i++;
	return (i);
}

t_stack	stack_numbers(char *argv[], char c)
{
	t_stack	stack;
	int		i;

	i = 0;
	stack.numbers = (int **)malloc(arg_count(argv) * sizeof(int *));
	if (!stack.numbers)
		stack.numbers = NULL;
	while (argv[i] && c == 'a')
	{
		*stack.numbers[i] = ft_atoi(argv[i]);
		i++;
	}
	if (c == 'a')
		stack.top = *stack.numbers;
	if (c == 'b')
		stack.top = NULL;
	i = 0;
	return (stack);
}
