/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 13:04:09 by jaeshin           #+#    #+#             */
/*   Updated: 2023/08/11 16:00:04 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
ft_memcmp compares the first n bytes of str1, str2.
*/
int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*temp;
	unsigned char	*temp2;

	temp = (unsigned char *)str1;
	temp2 = (unsigned char *)str2;
	while (n--)
	{
		if ((*temp - *temp2) != 0)
			return (*temp - *temp2);
		temp++;
		temp2++;
	}
	return (0);
}
