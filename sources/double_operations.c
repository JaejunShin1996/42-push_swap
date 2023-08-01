/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_operations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 15:36:32 by jaeshin           #+#    #+#             */
/*   Updated: 2023/08/01 15:47:40 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ss(t_node **a_head, t_node **b_head)
{
	swap(a_head, 's');
	swap(b_head, 's');
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
