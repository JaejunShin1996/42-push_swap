/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 16:30:22 by jaeshin           #+#    #+#             */
/*   Updated: 2023/08/01 19:21:11 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdio.h>
# include "includes/libft.h"

typedef struct s_node {
	int				value;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

typedef struct s_stack {
	struct s_node	*head;
	struct s_node	*tail;
}	t_stack;

// Structure
t_node	*generate_node(int value);
void	print_list(t_node **head);
void	insert_at_head(t_node **head, t_node **tail, int value);
int		remove_head(t_stack *stack);

// Error handling
unsigned int	pos_atoi(const char *str, int i);
long long		nev_atoi(const char *str, int i);
int				check_int_range(const char *str);
int				check_digit(char *input);
int				check_input(char *argv[]);
int				error_handling(char *argv[]);

// Operations
void	swap(t_node **head, char c);
void	ss(t_node **a_head, t_node **b_head);
void	push(t_stack *from, t_stack *to, char to_stack);
void	rotate(t_stack *stack, char which);
void	rr(t_stack *a, t_stack *b);
void	reverse_rotate(t_stack *stack, char which);
void	rrr(t_stack *a, t_stack *b);

#endif
