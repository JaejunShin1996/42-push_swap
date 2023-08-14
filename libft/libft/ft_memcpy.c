/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 13:05:50 by jaeshin           #+#    #+#             */
/*   Updated: 2023/08/11 16:00:06 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
ft_memcpy copies n characters from src to dest.
*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*temp;
	const char	*temp2;

	if (!dest && !src)
		return (NULL);
	i = 0;
	temp = (char *)dest;
	temp2 = (const char *)src;
	while (i < n)
	{
		temp[i] = temp2[i];
		i++;
	}
	return (dest);
}
