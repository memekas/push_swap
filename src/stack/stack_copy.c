/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_copy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbearded <sbearded@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 18:34:40 by sbearded          #+#    #+#             */
/*   Updated: 2019/10/29 18:42:30 by sbearded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_stack	*stack_copy(t_stack **dst, t_stack *src)
{
	*dst = stack_init();
	ft_memdel((void**)&((*dst)->arr));
	(*dst)->arr = (int *)malloc(sizeof(int) * (src->size + STACK_STEP));
	ft_memcpy((*dst)->arr, src->arr, src->size * sizeof(int));
	(*dst)->size = src->size;
	return (*dst);
}
