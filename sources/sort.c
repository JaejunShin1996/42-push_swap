/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 13:20:28 by jaeshin           #+#    #+#             */
/*   Updated: 2023/08/03 17:41:27 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_stack(t_stack *a, t_stack *b)
{
	printf("stack size - %d\n", a->size);
	if (a->size <= 3)
		sort_three(a);
	else if (a->size == 5)
		sort_five(a, b);
}
