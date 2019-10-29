/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_rev_rotate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbearded <sbearded@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 18:35:17 by sbearded          #+#    #+#             */
/*   Updated: 2019/10/30 02:29:40 by sbearded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

int		stack_rev_rotate(t_stack *stack)
{
	unsigned int	i;
	int				temp;

	if (stack == NULL || stack->arr == NULL)
		return (0);
	if (stack->size == 0)
		return (1);
	i = 0;
	temp = stack->arr[0];
	while (i < stack->size - 1)
	{
		stack->arr[i] = stack->arr[i + 1];
		i++;
	}
	stack->arr[stack->size - 1] = temp;
	return (1);
}
