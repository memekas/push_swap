/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_put.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbearded <sbearded@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 18:35:06 by sbearded          #+#    #+#             */
/*   Updated: 2019/10/29 18:42:30 by sbearded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

int		stack_put(t_stack *stack, int value)
{
	if (stack == NULL || stack->arr == NULL)
		return (0);
	stack->arr[(stack->size++)] = value;
	if ((stack->size % STACK_STEP) == 0)
		return (stack_resize(stack, stack->size + STACK_STEP));
	return (1);
}
