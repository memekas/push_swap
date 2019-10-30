/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort_round.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbearded <sbearded@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 22:07:35 by sbearded          #+#    #+#             */
/*   Updated: 2019/10/30 03:58:11 by sbearded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		check_sort_round(t_sort *sort)
{
	int				*arr;
	unsigned int	i;

	arr = sort->a->arr;
	i = sort->a->size;
	while (--i > 0)
	{
		if (arr[i] > arr[i - 1] && (arr[i - 1] != sort->min
											|| arr[i] != sort->max))
			return (0);
	}
	return (1);
}
