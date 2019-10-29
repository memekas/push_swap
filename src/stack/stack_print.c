/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbearded <sbearded@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 18:34:55 by sbearded          #+#    #+#             */
/*   Updated: 2019/10/29 18:42:30 by sbearded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	stack_print(t_stack stack)
{
	unsigned int i;

	if (stack.arr == NULL || stack.size == 0)
		return ;
	i = stack.size - 1;
	ft_putstr("-\n");
	while (i > 0)
	{
		ft_putnbr(stack.arr[i--]);
		ft_putchar('\n');
	}
	ft_putnbr(stack.arr[0]);
	ft_putchar('\n');
	ft_putstr("-\n");
}
