/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 23:24:03 by jaeshin           #+#    #+#             */
/*   Updated: 2023/08/01 12:09:50 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_node **head)
{
	t_node	*temp;
	
	temp = *head;
	while (temp)
	{
		printf("%i\n", temp->value);
		temp = temp->next;
	}
}

int	main(int argc, char *argv[])
{
	int		i;
	t_stack	*stack_a;
	t_stack	*stack_b;

	i = 1;
	if (argc < 2)
		return (-1);
	stack_a = (t_stack *)malloc(sizeof(t_stack *));
	stack_b = (t_stack *)malloc(sizeof(t_stack *));
	while (argv[i])
		insert_at_head(&stack_a->head, &stack_a->tail, ft_atoi(argv[i++]));

	swap(&stack_a->head, 'a');
	print_list(&stack_a->head);
	
	printf("stack\n");
	
	swap(&stack_a->head, 'a');
	print_list(&stack_a->head);
	
	push(stack_a, stack_b);
	print_list(&stack_a->head);
	
	return (0);
}
