/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilies.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 11:06:59 by jaeshin           #+#    #+#             */
/*   Updated: 2023/07/25 15:40:34 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	number_count(int **numbers)
{
	int	i;

	i = 0;
	while (numbers[i])
		i++;
	return (i);
}

void	swap(t_stack stack)
{
//	int	len;
//	int	temp;

//	len = number_count(stack.numbers);
//	if (len < 2)
//		return ;
//	temp = stack.numbers[len - 1][0];
//	stack.numbers[len] = stack.numbers[len - 1];
//	stack.numbers[len - 1] = &temp;
}

void	push(t_stack from, t_stack to)
{
	//int	from_len;
	//int	to_len;
	//int	temp;

	//from_len = number_count(from.numbers);
	//to_len = number_count(to.numbers);
	//if (from_len < 1)
	//	return ;
	//temp = *from.numbers[from_len - 1];
	//from.numbers[from_len - 1] = NULL;
	//to.numbers[to_len - 1] = &temp;
}
