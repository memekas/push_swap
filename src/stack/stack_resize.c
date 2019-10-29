/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_resize.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbearded <sbearded@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 18:35:11 by sbearded          #+#    #+#             */
/*   Updated: 2019/10/29 18:42:30 by sbearded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

int		stack_resize(t_stack *stack, unsigned int new_size)
{
	int *temp;

	if (stack == NULL || stack->arr == NULL)
		return (0);
	if (stack->size == new_size)
		return (1);
	CH_NULL(temp = (int*)ft_memalloc(sizeof(int) * new_size));
	ft_memcpy(temp, stack->arr, sizeof(int) * ((new_size > stack->size) ?
	(stack->size) : (new_size)));
	ft_memdel((void**)&(stack->arr));
	stack->arr = temp;
	return (1);
}
