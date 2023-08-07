/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 13:20:28 by jaeshin           #+#    #+#             */
/*   Updated: 2023/08/07 17:57:03 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_stack(t_stack *a, t_stack *b)
{
	if (a->size <= 10)
		sort_ten(a, b);
	else if (10 < a->size && a->size <= 100)
		sort_ten_hundred(a, b, 5);
	else if (100 < a->size && a->size <= 500)
		sort_ten_hundred(a, b, 11);
}
