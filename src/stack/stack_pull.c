/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_pull.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbearded <sbearded@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 18:35:00 by sbearded          #+#    #+#             */
/*   Updated: 2019/10/29 18:42:30 by sbearded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

int		stack_pull(t_stack *stack)
{
	int ret;

	if (stack == NULL || stack->arr == NULL)
		return (0);
	if (stack->size == 0)
		return (0);
	ret = stack->arr[(--stack->size)];
	if ((stack->size % STACK_STEP) == (STACK_STEP - 1))
		if (stack_resize(stack, stack->size + STACK_STEP) == 0)
			exit(-1);
	return (ret);
}
