/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 13:19:13 by jaeshin           #+#    #+#             */
/*   Updated: 2023/08/11 16:00:15 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

/*
ft_putchar_fd outputs the character ’c’ to the given file descriptor.
0 - stdin
1 - stdout
2 - stderr
*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
