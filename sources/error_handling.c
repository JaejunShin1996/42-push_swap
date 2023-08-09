/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:57:08 by jaeshin           #+#    #+#             */
/*   Updated: 2023/08/09 17:54:18 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	check_input(char *argv[])
{
	int		i;

	i = 0;
	while (argv[i])
	{
		if (!check_digit(argv[i]))
			return (0);
		else if (!check_int_range(argv[i]))
			return (0);
		else if (!check_duplicate(argv, i))
			return (0);
		i++;
	}
	return (1);
}

int	sorted(t_stack *stack)
{
	t_node	*temp;

	temp = stack->head;
	while (temp->next)
	{
		if (temp->value > temp->next->value)
			return (0);
		temp = temp->next;
	}
	return (1);
}

void	error_allocation(t_stack *a, t_stack *b, char **input)
{
	if (a)
		free_stack(a);
	if (b)
		free_stack(b);
	free_input(input);
	exit (0);
}

int	error_handling(char *argv[])
{
	if (!check_input(argv))
	{
		ft_putendl_fd("Error", 2);
		return (1);
	}
	return (0);
}
