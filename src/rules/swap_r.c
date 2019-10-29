/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_r.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbearded <sbearded@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 17:26:03 by sbearded          #+#    #+#             */
/*   Updated: 2019/10/29 18:42:30 by sbearded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rules.h"

int		rule_ra(t_stack *a)
{
	return (stack_rotate(a));
}

int		rule_rb(t_stack *b)
{
	return (stack_rotate(b));
}

int		rule_rr(t_stack *a, t_stack *b)
{
	return (stack_rotate(a) & stack_rotate(b));
}
