/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_move.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbearded <sbearded@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 22:38:46 by sbearded          #+#    #+#             */
/*   Updated: 2019/10/30 02:05:33 by sbearded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	count_move_a(t_stack *a, int num, int direction)
{
	t_stack	*tmp;
	size_t	count;
	int		(*rule)(t_stack *a, int print);

	if (direction == UP)
		rule = &rule_ra;
	else if (direction == DOWN)
		rule = &rule_rra;
	stack_copy(&tmp, a);
	count = 0;
	while (1)
	{
		if (FIRST(tmp) > num && LAST(tmp) < num)
			break ;
		count++;
		rule(tmp, 0);
	}
	stack_deinit(&tmp);
	return (count);
}

static void	check_move_a(t_stack *a, t_move *node, int num)
{
	node->a_up = count_move_a(a, num, UP);
	node->a_down = count_move_a(a, num, DOWN);
	if (node->a_up <= node->a_down)
		node->direct_a = UP;
	else
		node->direct_a = DOWN;
}

void		check_move_b(t_stack *b, t_move *node, size_t i)
{
	size_t	j;

	j = 0;
	while (i + j != b->size - 1)
		j++;
	node->b_up = j;
	j = 0;
	while ((int)(i - j) >= 0)
		j++;
	j++;
	node->b_down = j;
	if (node->b_up <= node->b_down)
		node->direct_b = UP;
	else
		node->direct_b = DOWN;
}

t_move		find_move(t_stack *a, t_stack *b, size_t i)
{
	t_move	node;
	size_t	res;

	node.i = i;
	check_move_b(b, &node, i);
	check_move_a(a, &node, b->arr[i]);
	res = 0;
	if (node.direct_a == UP)
		res += node.a_up;
	else
		res += node.a_down;
	if (node.direct_b == UP)
		res += node.b_up;
	else
		res += node.b_down;
	node.total = res;
	return (node);
}
