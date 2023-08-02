/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_duplicate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 14:20:04 by jaeshin           #+#    #+#             */
/*   Updated: 2023/08/02 15:10:27 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	cmp_str(const char *str1, const char *str2)
{
	size_t	i;

	i = 0;
	while (str1[i] || str2[i])
	{
		if ((unsigned char)str1[i] != (unsigned char)str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	return (0);
}

int	check_duplicate(char *argv[], int i)
{
	int	j;

	j = i + 1;
	while (argv[j])
	{
		if (!cmp_str(argv[i], argv[j]))
			return (0);
		j++;
	}
	return (1);
}
