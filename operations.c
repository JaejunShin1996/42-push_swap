/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 20:23:56 by jaeshin           #+#    #+#             */
/*   Updated: 2023/07/31 20:24:19 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_node **head, char c)
{
	int	temp;

	if (!*head || !(*head)->next)
		return ;
	temp = (*head)->value;
	(*head)->value = (*head)->next->value;
	(*head)->next->value = temp;
	if (c == 'a')
		ft_putendl_fd("sa", 1);
	else if (c == 'b')
		ft_putendl_fd("sb", 1);
}

void	ss(t_node **a_head, t_node**b_head)
{
	swap(a_head, 's');
	swap(b_head, 's');
	ft_putendl_fd("ss", 1);
}
