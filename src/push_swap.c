/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbearded <sbearded@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 19:17:45 by sbearded          #+#    #+#             */
/*   Updated: 2019/10/30 03:12:52 by sbearded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	t_sort	sort;

	if (argc == 1)
		exit(1);
	if (fill_stack(argc, argv, &a, &b) == 0)
	{
		ft_putendl_fd("Error", 2);
		return (1);
	}
	fill_sort(a, b, &sort);
	sort_f(&sort);
	stack_deinit(&a);
	stack_deinit(&b);
}
