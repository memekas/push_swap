/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_is_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbearded <sbearded@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 18:34:51 by sbearded          #+#    #+#             */
/*   Updated: 2019/10/30 03:43:46 by sbearded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

int	stack_is_sort(t_stack *a)
{
	int	i;

	i = a->size;
	while (--i > 0)
		if (a->arr[i] > a->arr[i - 1])
			return (0);
	return (1);
}
