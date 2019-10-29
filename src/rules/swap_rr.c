/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_rr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbearded <sbearded@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 17:26:12 by sbearded          #+#    #+#             */
/*   Updated: 2019/10/29 17:26:16 by sbearded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rules.h"

int		push_swap_rra(t_int_stack *a)
{
	return (stack_rev_rotate(a));
}

int		push_swap_rrb(t_int_stack *b)
{
	return (stack_rev_rotate(b));
}

int		push_swap_rrr(t_int_stack *a, t_int_stack *b)
{
	return (stack_rev_rotate(a) & stack_rev_rotate(b));
}
