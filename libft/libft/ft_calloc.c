/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 12:22:02 by jaeshin           #+#    #+#             */
/*   Updated: 2023/08/11 15:59:43 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
ft_calloc works like malloc does but it also initialises them to zero.
*/
void	*ft_calloc(size_t nitems, size_t size)
{
	void			*result;
	unsigned int	max;

	max = 2147483647;
	if (nitems == 0 || size == 0)
		return (malloc(0));
	if (nitems > max || size > max || size * nitems > max)
		return (NULL);
	result = (void *)malloc(nitems * size);
	if (!result)
		return (NULL);
	ft_bzero(result, nitems * size);
	return (result);
}
