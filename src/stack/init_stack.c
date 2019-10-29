/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbearded <sbearded@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 18:34:34 by sbearded          #+#    #+#             */
/*   Updated: 2019/10/29 18:34:35 by sbearded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_int_stack	*stack_init(void)
{
	t_int_stack *ret;

	if ((ret = (t_int_stack*)ft_memalloc(sizeof(t_int_stack))) == NULL)
	{
		exit(-1);
	}
	if ((ret->arr = (int*)ft_memalloc(sizeof(int) * STACK_STEP)) == NULL)
	{
		free(ret);
		exit(-1);
	}
	ret->size = 0;
	return (ret);
}
