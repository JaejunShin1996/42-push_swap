/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 11:04:50 by jaeshin           #+#    #+#             */
/*   Updated: 2023/07/25 16:01:08 by jaeshin          ###   ########.fr       */
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

t_element	generate_element(int num)
{
	t_element	element;

	element.num = num;
	element.next = NULL;
	element.prev = NULL;
	return (element);
}

t_stack	stack_numbers(char *argv[], char c)
{
	t_stack		stack;
	t_element	temp;
	int			i;

	stack.a = (t_element *)malloc(arg_count(argv) * sizeof(t_element));
	stack.b = (t_element *)malloc(arg_count(argv) * sizeof(t_element));
	i = 0;
	while (argv[i])
	{
		temp = generate_element(ft_atoi(argv[i]));
		stack.a[i] = temp;
		i++;
	}
	return (stack);
}
