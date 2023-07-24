/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 16:54:00 by jaeshin           #+#    #+#             */
/*   Updated: 2023/07/24 23:25:18 by jaeshin          ###   ########.fr       */
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

t_stack	stack_numbers(char *argv[])
{
	t_stack	stack;
	char	**temp;
	int		*nums;
	int		i;

	i = 0;
	temp = ft_split(*argv, ' ');
	nums = (int	*)malloc(word_count(argv) * sizeof(int));
	while (temp[i++])
		nums[i] = ft_atoi(temp[i]);
	stack.numbers = nums;
	stack.top = nums[--i];
	return (stack);
}

int	main(int argc, char *argv[])
{
	t_stack	stack_a;
	//t_stack	stack_b;
	if (argc < 1)
		return (0);
	if (!check_validity(++argv) || argc < 1)
		return (0);
	stack_a = stack_numbers(argv);
	printf("%d\n", stack_a.top);
	return (0);
}
