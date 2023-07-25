/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 16:30:22 by jaeshin           #+#    #+#             */
/*   Updated: 2023/07/25 12:17:29 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdio.h>
# include "Libft/libft.h"

typedef struct s_stack {
	int	**numbers;
	int	*top;
}	t_stack;

int		check_validity(char *input[]);
t_stack	stack_numbers(char *argv[], char c);

int		number_count(int **numbers);

void	swap(t_stack stack);
void	push(t_stack from, t_stack to);

#endif
