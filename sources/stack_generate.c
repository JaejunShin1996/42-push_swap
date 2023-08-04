/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_generate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 13:42:25 by jaeshin           #+#    #+#             */
/*   Updated: 2023/08/04 13:11:48 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_node	*generate_node(int value)
{
	t_node	*temp;

	temp = (t_node *)malloc(sizeof(t_node));
	temp->value = value;
	temp->next = NULL;
	temp->prev = NULL;
	return (temp);
}

void	insert_at_head(t_stack *stack, t_node *new_node)
{
	if (!stack->tail)
		stack->tail = new_node;
	if (stack->head)
		stack->head->prev = new_node;
	new_node->next = stack->head;
	stack->head = new_node;
}

void	insert_after_tail(t_stack *stack, int value)
{
	t_node	*new_node;

	new_node = generate_node(value);
	if (!stack->head)
	{
		stack->head = new_node;
		stack->tail = new_node;
		return ;
	}
	stack->tail->next = new_node;
	new_node->prev = stack->tail;
	stack->tail = new_node;
}

t_node	*detach_head(t_stack *stack)
{
	t_node	*temp;

	temp = stack->head;
	if (stack->head == stack->tail)
	{
		stack->head = NULL;
		stack->tail = NULL;
	}
	else
	{
		stack->head = stack->head->next;
		stack->head->prev = NULL;
	}
    return (temp);
}

void	generate_stack(char *argv[], t_stack *a, t_stack *b)
{
	int	i;

	if (!a || !b)
		return ;
	i = 1;
	while (argv[i])
		insert_after_tail(a, ft_atoi(argv[i++]));
	a->size = get_size(a);
}
