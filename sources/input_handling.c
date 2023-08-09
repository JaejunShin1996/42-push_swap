/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:26:20 by jaeshin           #+#    #+#             */
/*   Updated: 2023/08/09 17:54:38 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

char	**argv_to_input(char **argv, int argc)
{
	char	**result;
	int		i;

	i = 0;
	result = malloc((argc) * sizeof(char *));
	while (i < argc - 1)
	{
		result[i] = ft_strdup(argv[i + 1]);
		i++;
	}
	return (result);
}

void	free_input(char **input)
{
	int	i;

	i = 0;
	while (input[i])
	{
		free(input[i]);
		i++;
	}
	free(input);
}

void	input_error(char **input)
{
	free_input(input);
	exit (0);
}
