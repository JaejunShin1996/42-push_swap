/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_generate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 13:42:25 by jaeshin           #+#    #+#             */
/*   Updated: 2023/08/03 14:01:04 by jaeshin          ###   ########.fr       */
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

void	insert_after_head(t_stack *stack, int value)
{
	t_node	*new_node;

	new_node = generate_node(value);
	if (!stack->head)
		stack->head = new_node;
	if (stack->tail)
	{
		stack->tail->next = new_node;
		new_node->prev = stack->tail;
	}
	stack->tail = new_node;
}

int	remove_head(t_stack *stack)
{
	int	value;

	value = stack->head->value;
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
    return (value);
}

void	generate_stack(char *argv[], t_stack *stack)
{
	int	i;

	i = 1;
	while (argv[i])
		insert_after_head(stack, ft_atoi(argv[i++]));
	stack->size = get_size(stack);
}
