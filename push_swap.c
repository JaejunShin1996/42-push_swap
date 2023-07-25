/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 16:54:00 by jaeshin           #+#    #+#             */
/*   Updated: 2023/07/25 10:08:20 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "Libft/libft.h"

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

int	word_count(char	*argv[])
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
	stack.numbers = (int *)malloc(word_count(argv) * sizeof(int));
	while (argv[i] && c == 'a')
	{
		stack.numbers[i] = ft_atoi(argv[i]);
		i++;
	}
	if (c == 'a')
		stack.top = stack.numbers[--i];
	else
		stack.top = 0;
	return (stack);
}

int	main(int argc, char *argv[])
{
	t_stack	stack_a;
	t_stack	stack_b;

	if (argc < 1)
		return (0);
	if (!check_validity(++argv) || argc < 1)
		return (0);
	stack_a = stack_numbers(argv, 'a');
	stack_b = stack_numbers(argv, 'b');
	printf("%d, %d\n", stack_a.top, stack_b.top);
	return (0);
}
