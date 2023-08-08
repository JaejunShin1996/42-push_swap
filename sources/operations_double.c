/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_double.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 14:19:28 by jaeshin           #+#    #+#             */
/*   Updated: 2023/08/08 17:03:29 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ss(t_stack *a, t_stack *b)
{
	swap(a, 's');
	swap(b, 's');
	ft_putendl_fd("ss", 1);
}

void	rr(t_stack *a, t_stack *b)
{
	rotate(a, 'c');
	rotate(b, 'c');
	ft_putendl_fd("rr", 1);
}

void	rrr(t_stack *a, t_stack *b)
{
	reverse_rotate(a, 'c');
	reverse_rotate(b, 'c');
	ft_putendl_fd("rrr", 1);
}
