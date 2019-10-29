/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_deinit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbearded <sbearded@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 18:34:45 by sbearded          #+#    #+#             */
/*   Updated: 2019/10/29 18:42:30 by sbearded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	stack_deinit(t_stack **stack)
{
	ft_memdel((void**)&((*stack)->arr));
	ft_memdel((void**)stack);
}
