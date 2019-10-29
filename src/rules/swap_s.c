/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbearded <sbearded@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 17:26:20 by sbearded          #+#    #+#             */
/*   Updated: 2019/10/29 17:26:25 by sbearded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rules.h"

int		push_swap_sa(t_int_stack *a)
{
	return (stack_swap(a));
}

int		push_swap_sb(t_int_stack *b)
{
	return (stack_swap(b));
}

int		push_swap_ss(t_int_stack *a, t_int_stack *b)
{
	return (stack_swap(a) & stack_swap(b));
}
