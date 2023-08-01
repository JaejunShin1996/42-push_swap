/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:57:08 by jaeshin           #+#    #+#             */
/*   Updated: 2023/08/01 19:21:01 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_len(char *argv[])
{
	int	i;
	
	i = 0;
	while (argv[i])
		i++;
	return (i);
}

int	check_digit(char *input)
{
	int	i;
	
	i = 0;
	while (input[i])
	{
		if (i == 0)
		{
			if (!ft_isdigit(input[i]) || input[i] != '-')
				return (0);
		}
		else if (!ft_isdigit(input[i]))
			return (0);
		i++;
	}
	return (1);
}

int	check_input(char *argv[])
{
	int	i;

	i = 1;
	while (argv[i])
	{
		if (!check_digit(argv[i]) || check_int_range(argv[i]))
			return (0);
		i++;
	}
	return (1);
}

int	error_handling(char *argv[])
{
	if (!check_input(argv))
	{
		ft_putendl_fd("ERROR", 2);
		return (0);
	}
	return (1);
}
