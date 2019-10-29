/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbearded <sbearded@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 19:17:58 by sbearded          #+#    #+#             */
/*   Updated: 2019/10/30 02:10:55 by sbearded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "checker.h"

# define UP		1
# define DOWN	0

# define STACK_A	0
# define STACK_B	1

# define PRINT_F	1

# define MAX_SIZE_T	0xFFFFFFFFFFFFFFFF

typedef int		(*t_rule)(t_stack *a, int print);

typedef struct	s_sort
{
	t_stack		*a;
	t_stack		*b;
	int			min;
	int			max;
	int			min_i;
	int			max_i;
	size_t		count;
}				t_sort;

typedef struct	s_move
{
	int			i;
	size_t		a_up;
	size_t		a_down;
	size_t		b_up;
	size_t		b_down;
	int			direct_a;
	int			direct_b;
	size_t		total;
}				t_move;

void			fill_sort(t_stack *a, t_stack *b, t_sort *sort);
int				check_sort_round(t_sort *sort);
t_move			find_move(t_stack *a, t_stack *b, size_t i);
void			rotate_stack(t_sort *sort, t_move *node, int stack_f);
void			check_move_b(t_stack *b, t_move *node, size_t i);
t_rule			choose_rule_b(t_move *node, size_t *i);
int				sort_f(t_sort *sort);

#endif
