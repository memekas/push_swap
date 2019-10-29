/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_r.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbearded <sbearded@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 17:26:03 by sbearded          #+#    #+#             */
/*   Updated: 2019/10/30 01:59:47 by sbearded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rules.h"

int		rule_ra(t_stack *a, int print)
{
	if (print)
		ft_putstr("ra\n");
	return (stack_rotate(a));
}

int		rule_rb(t_stack *b, int print)
{
	if (print)
		ft_putstr("pb\n");
	return (stack_rotate(b));
}

int		rule_rr(t_stack *a, t_stack *b, int print)
{
	if (print)
		ft_putstr("rr\n");
	return (stack_rotate(a) & stack_rotate(b));
}
