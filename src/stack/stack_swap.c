/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbearded <sbearded@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 18:35:27 by sbearded          #+#    #+#             */
/*   Updated: 2019/10/29 18:35:27 by sbearded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

int		stack_swap(t_int_stack *stack)
{
	int	temp;

	if (stack == NULL || stack->arr == NULL || stack->size < 2)
		return (0);
	temp = stack->arr[stack->size - 1];
	stack->arr[stack->size - 1] = stack->arr[stack->size - 2];
	stack->arr[stack->size - 2] = temp;
	return (1);
}
