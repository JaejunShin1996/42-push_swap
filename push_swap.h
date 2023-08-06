/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 15:54:13 by jaeshin           #+#    #+#             */
/*   Updated: 2023/08/06 19:55:05 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include "includes/libft.h"
# include <stdio.h>

typedef struct s_node {
	int				value;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

typedef struct s_stack {
	int				size;
	struct s_node	*head;
	struct s_node	*tail;
}	t_stack;

// Structure
t_node	*generate_node(int value);
void	print_list(t_stack *stack);
void	insert_at_head(t_stack *stack, t_node *new_node);
void	insert_after_tail(t_stack *stack, int value);
t_node	*detach_head(t_stack *stack);
int		get_size(t_stack *stack);
void	generate_stack(char *argv[], t_stack *a, t_stack *b);

// Operations
void	swap(t_stack *stack, char c);
void	push(t_stack *from, t_stack *to, char to_stack);
void	rotate(t_stack *stack, char which);
void	reverse_rotate(t_stack *stack, char which);
void	ss(t_stack *a, t_stack *b);
void	rr(t_stack *a, t_stack *b);
void	rrr(t_stack *a, t_stack *b);

// Error handling
unsigned int	pos_atoi(const char *str, int i);
long long		nev_atoi(const char *str, int i);
int				check_int_range(const char *str);
int				check_digit(char *input);
int				check_input(char *argv[]);
int				cmp_str(const char *str1, const char *str2);
int				check_duplicate(char *argv[], int i);
int 			error_sorted_allocation(t_stack *a, t_stack *b);
int				error_handling(char *argv[]);
int				sorted(t_stack *stack);

// Sort Utils
int		dis_to_tail(t_node *node);
int		dis_to_head(t_node *node);
t_node	*get_biggest(t_stack *stack);
t_node	*get_smallest(t_stack *stack);
int		sort_three_case1(t_stack *a);
int		sort_three_case2(t_stack *a);
void	push_smallest(t_stack *a, t_stack *b);

// Sort
void	sort_two(t_stack *a);
void	sort_three(t_stack *a);
void	sort_ten(t_stack *a, t_stack *b);
void	sort_ten_hundred(t_stack *a, t_stack *b, int divider);
void	sort_stack(t_stack *a, t_stack *b);

#endif
