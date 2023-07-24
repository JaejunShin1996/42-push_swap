/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 16:54:00 by jaeshin           #+#    #+#             */
/*   Updated: 2023/07/24 18:52:57 by jaeshin          ###   ########.fr       */
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

int	main(int argc, char *argv[])
{
	printf("%i\n", argc);
	if (!check_validity(++argv))
		return (0);
	return (0);
}
