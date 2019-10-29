/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbearded <sbearded@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 17:25:50 by sbearded          #+#    #+#             */
/*   Updated: 2019/10/30 01:58:16 by sbearded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rules.h"

int		rule_pa(t_stack *a, t_stack *b, int print)
{
	int temp;

	if (print)
		ft_putstr("pa\n");
	if (b->size == 0)
		return (0);
	temp = stack_pull(b);
	return (stack_put(a, temp));
}

int		rule_pb(t_stack *a, t_stack *b, int print)
{
	int temp;

	if (print)
		ft_putstr("pb\n");
	if (a->size == 0)
		return (0);
	temp = stack_pull(a);
	return (stack_put(b, temp));
}
