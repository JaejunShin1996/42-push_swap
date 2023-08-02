/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 20:25:44 by jaeshin           #+#    #+#             */
/*   Updated: 2023/08/02 18:32:55 by jaeshin          ###   ########.fr       */
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

void	print_list(t_stack *stack)
{
	t_node	*temp;
	
	temp = stack->head;
	while (temp)
	{
		printf("%i\n", temp->value);
		temp = temp->next;
	}
}

void	insert_at_head(t_stack *stack, int value)
{
	t_node	*new_node;
	
	new_node = generate_node(value);
	if (stack->tail == NULL)
		stack->tail = new_node;
	if (stack->head != NULL)
		stack->head->prev = new_node;
	new_node->next = stack->head;
	stack->head = new_node;
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
		insert_at_head(stack, ft_atoi(argv[i++]));
}
