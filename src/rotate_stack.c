/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbearded <sbearded@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 23:41:29 by sbearded          #+#    #+#             */
/*   Updated: 2019/10/30 02:11:35 by sbearded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_rule		choose_rule_a(t_move *node, size_t *i)
{
	t_rule	rule;

	if (node->direct_a == UP)
	{
		rule = &rule_ra;
		*i = node->a_up;
	}
	else
	{
		rule = &rule_rra;
		*i = node->a_down;
	}
	return (rule);
}

t_rule		choose_rule_b(t_move *node, size_t *i)
{
	t_rule	rule;

	if (node->direct_b == UP)
	{
		rule = &rule_ra;
		*i = node->b_up;
	}
	else
	{
		rule = &rule_rra;
		*i = node->b_down;
	}
	return (rule);
}

void		rotate_stack(t_sort *sort, t_move *node, int stack_f)
{
	t_rule	rule;
	t_stack	*stack;
	size_t	i;

	if (stack_f == STACK_A)
	{
		stack = sort->a;
		rule = choose_rule_a(node, &i);
	}
	else
	{
		stack = sort->b;
		rule = choose_rule_b(node, &i);
	}
	while (i-- > 0)
		rule(stack, 1);
}
