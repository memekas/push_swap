/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_rr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbearded <sbearded@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 17:26:12 by sbearded          #+#    #+#             */
/*   Updated: 2019/10/30 02:00:27 by sbearded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rules.h"

int		rule_rra(t_stack *a, int print)
{
	if (print)
		ft_putstr("rra\n");
	return (stack_rev_rotate(a));
}

int		rule_rrb(t_stack *b, int print)
{
	if (print)
		ft_putstr("rrb\n");
	return (stack_rev_rotate(b));
}

int		rule_rrr(t_stack *a, t_stack *b, int print)
{
	if (print)
		ft_putstr("rrr\n");
	return (stack_rev_rotate(a) & stack_rev_rotate(b));
}
