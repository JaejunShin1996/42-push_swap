/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 13:19:58 by jaeshin           #+#    #+#             */
/*   Updated: 2023/08/11 16:00:25 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
ft_split takes a string and a character and split the string using char
and put them into 2d array.
*/
size_t	words_count(char const *s, char c)
{
	size_t	count;
	int		i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i])
				i++;
		}
		if (s[i])
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	**result;

	i = 0;
	j = 0;
	k = 0;
	result = (char **)malloc(sizeof(char *) * (words_count(s, c) + 1));
	if (!result)
		return (NULL);
	while (i < words_count(s, c))
	{
		while (s[j] != c && s[j])
			j++;
		j++;
		if (s[k] != c)
		{
			result[i] = ft_substr(s, k, j - k - 1);
			i++;
		}
		k = j;
	}
	result[i] = 0;
	return (result);
}
