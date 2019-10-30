/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbearded <sbearded@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 21:54:48 by sbearded          #+#    #+#             */
/*   Updated: 2019/10/30 03:48:21 by sbearded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	pre_start(t_sort *sort)
{
	while (sort->a->size > 3)
	{
		if (FIRST(sort->a) != sort->min && FIRST(sort->a) != sort->max)
			rule_pb(sort->a, sort->b, 1);
		else
			rule_ra(sort->a, 1);
	}
}

static void	main_sort(t_sort *sort)
{
	t_move	node;
	t_move	tmp;
	size_t	i;

	while (sort->b->size != 0)
	{
		node.total = MAX_SIZE_T;
		i = sort->b->size + 1;
		while (--i > 0)
		{
			tmp = find_move(sort->a, sort->b, i - 1);
			if (tmp.total < node.total)
				node = tmp;
		}
		rotate_stack(sort, &node, STACK_B);
		rotate_stack(sort, &node, STACK_A);
		rule_pa(sort->a, sort->b, 1);
	}
}

static void	end(t_sort *sort, t_move *node)
{
	t_rule	rule;
	t_stack	*stack;
	size_t	i;
	int		*arr;

	node->direct_a = 0;
	stack = sort->a;
	arr = sort->a->arr;
	i = 0;
	while (arr[i] != sort->min)
		i++;
	check_move_b(sort->a, node, i);
	rule = choose_rule_b(node, &i);
	while (i-- > 0)
		rule(stack, 1);
}

int			sort_f(t_sort *sort)
{
	t_move	node;

	if (stack_is_sort(sort->a))
		return (1);
	pre_start(sort);
	if (check_sort_round(sort) == 0)
	{
		rule_pb(sort->a, sort->b, 1);
		rule_ra(sort->a, 1);
		rule_pa(sort->a, sort->b, 1);
	}
	main_sort(sort);
	end(sort, &node);
	return (1);
}
