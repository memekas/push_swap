/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_r.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbearded <sbearded@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 17:26:03 by sbearded          #+#    #+#             */
/*   Updated: 2019/10/29 17:26:07 by sbearded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rules.h"

int		push_swap_ra(t_int_stack *a)
{
	return (stack_rotate(a));
}

int		push_swap_rb(t_int_stack *b)
{
	return (stack_rotate(b));
}

int		push_swap_rr(t_int_stack *a, t_int_stack *b)
{
	return (stack_rotate(a) & stack_rotate(b));
}
