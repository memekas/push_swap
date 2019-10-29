/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbearded <sbearded@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 17:26:20 by sbearded          #+#    #+#             */
/*   Updated: 2019/10/29 18:42:30 by sbearded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rules.h"

int		rule_sa(t_stack *a)
{
	return (stack_swap(a));
}

int		rule_sb(t_stack *b)
{
	return (stack_swap(b));
}

int		rule_ss(t_stack *a, t_stack *b)
{
	return (stack_swap(a) & stack_swap(b));
}
