/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 13:21:27 by jaeshin           #+#    #+#             */
/*   Updated: 2023/08/11 16:00:30 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strdup(const char *str)
{
	int		i;
	int		j;
	char	*result;

	i = 0;
	j = 0;
	while (str[j])
		j++;
	result = (char *)malloc(sizeof(*result) * (j + 1));
	if (!(result))
		return (NULL);
	while (i < j)
	{
		result[i] = str[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
