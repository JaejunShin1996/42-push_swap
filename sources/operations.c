/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 20:23:56 by jaeshin           #+#    #+#             */
/*   Updated: 2023/08/02 18:09:28 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_stack *stack, char c)
{
	int	temp;

	if (!stack || !stack->head->next)
		return ;
	temp = stack->head->value;
	stack->head->value = stack->head->next->value;
	stack->head->next->value = temp;
	if (c == 'a')
		ft_putendl_fd("sa", 1);
	else if (c == 'b')
		ft_putendl_fd("sb", 1);
}

void	push(t_stack *from, t_stack *to, char to_stack)
{
	int	value;

	if (!from->head)
		return ;
	value = remove_head(from);
	insert_at_head(&to->head, &to->tail, value);
	if (to_stack == 'a')
		ft_putendl_fd("pa", 1);
	else if (to_stack == 'b')
		ft_putendl_fd("pb", 1);
}

void	rotate(t_stack *stack, char which)
{
	int		value;
	t_node	*temp;

	if (!stack->head)
		return ;
	value = stack->head->value;
	temp = stack->head;
	while (temp->next)
	{
		temp->value = temp->next->value;
		temp = temp->next;
	}
	stack->tail->value = value;
	if (which == 'a')
		ft_putendl_fd("ra", 1);
	else if (which == 'b')
		ft_putendl_fd("rb", 1);
}

void	reverse_rotate(t_stack *stack, char which)
{
	int		value;
	t_node	*temp;

	if (!stack->head)
		return ;
	value = stack->tail->value;
	temp = stack->tail;
	while (temp->prev)
	{
		temp->value = temp->prev->value;
		temp = temp->prev;
	}
	stack->head->value = value;
	if (which == 'a')
		ft_putendl_fd("rra", 1);
	else if (which == 'b')
		ft_putendl_fd("rrb", 1);
}
