/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaeshin <jaeshin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 16:30:22 by jaeshin           #+#    #+#             */
/*   Updated: 2023/07/24 18:46:51 by jaeshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_stack {
	int	*arr;
	int	top;
}	t_stack;

#endif