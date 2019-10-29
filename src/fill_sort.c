/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbearded <sbearded@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 21:39:57 by sbearded          #+#    #+#             */
/*   Updated: 2019/10/30 02:11:20 by sbearded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	find_mix_max(t_stack *a, t_sort *sort)
{
	int		*arr;
	int		min;
	int		max;
	size_t	i;

	arr = a->arr;
	min = arr[0];
	max = arr[0];
	i = 0;
	while (++i < a->size)
	{
		if (arr[i] > max)
		{
			sort->max_i = i;
			max = arr[i];
		}
		else if (arr[i] < min)
		{
			sort->min_i = i;
			min = arr[i];
		}
	}
	sort->min = min;
	sort->max = max;
}

void		fill_sort(t_stack *a, t_stack *b, t_sort *sort)
{
	sort->a = a;
	sort->b = b;
	sort->count = a->size;
	find_mix_max(a, sort);
}
