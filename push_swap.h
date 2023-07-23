/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 16:30:22 by jaeshin           #+#    #+#             */
/*   Updated: 2023/07/23 17:24:38 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define MAX_SIZE 999

# include <stdlib.h>
# include <fcntl.h>

typedef struct s_stack {
	int	arr[MAX_SIZE];
	int	top;
}	t_stack;

#endif