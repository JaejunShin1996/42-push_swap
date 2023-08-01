/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 17:26:44 by jaeshin           #+#    #+#             */
/*   Updated: 2023/08/01 17:46:05 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

unsigned int	pos_atoi(const char *str, int i)
{
	unsigned int	result;

	result = 0;
	while ('0' <= str[i] && str[i] <= '9')
	{
		result = (str[i] - '0') + (result * 10);
		i++;
	}
	return (result);
}

long long	nev_atoi(const char *str, int i)
{
	long long	result;

	result = 0;
	while ('0' <= str[i] && str[i] <= '9')
	{
		result = (str[i] - '0') + (result * 10);
		i++;
	}
	return (result * -1);
}

int	check_int_range(const char *str)
{
	int	i;
	int	minus;

	i = 0;
	minus = 1;
	while (str[i] == ' ' || (9 <= str[i] && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus = -1;
		i++;
	}
	if (minus < 0)
	{
		if (nev_atoi(str, i) < -2147483647)
			return (0);
	}
	else if (minus >= 0)
	{
		if (pos_atoi(str, i) > 2147483647)
			return (0);
	}
	return (1);
}
