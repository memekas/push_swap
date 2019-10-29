/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbearded <sbearded@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 18:34:34 by sbearded          #+#    #+#             */
/*   Updated: 2019/10/29 22:52:53 by sbearded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_stack	*stack_init(void)
{
	t_stack *ret;

	if ((ret = (t_stack*)ft_memalloc(sizeof(t_stack))) == NULL)
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
