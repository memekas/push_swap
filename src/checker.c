/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbearded <sbearded@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 15:50:02 by sbearded          #+#    #+#             */
/*   Updated: 2019/10/29 18:04:56 by sbearded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int		push_swap_handler(const char *command, t_int_stack *a, t_int_stack *b)
{
	if (a == NULL || a->arr == NULL || b == NULL || b->arr == NULL)
		return (0);
	if (ft_strcmp(command, "sa") == 0)
		return (push_swap_sa(a));
	else if (ft_strcmp(command, "sb") == 0)
		return (push_swap_sa(b));
	else if (ft_strcmp(command, "ss") == 0)
		return (push_swap_ss(a, b));
	else if (ft_strcmp(command, "pa") == 0)
		return (push_swap_pa(a, b));
	else if (ft_strcmp(command, "pb") == 0)
		return (push_swap_pb(a, b));
	else if (ft_strcmp(command, "ra") == 0)
		return (push_swap_ra(a));
	else if (ft_strcmp(command, "rb") == 0)
		return (push_swap_rb(b));
	else if (ft_strcmp(command, "rr") == 0)
		return (push_swap_rr(a, b));
	else if (ft_strcmp(command, "rra") == 0)
		return (push_swap_rra(a));
	else if (ft_strcmp(command, "rrb") == 0)
		return (push_swap_rrb(b));
	else if (ft_strcmp(command, "rrr") == 0)
		return (push_swap_rrr(a, b));
	return (0);
}

int		read_input(t_int_stack *a, t_int_stack *b)
{
	char	*line;
	int		res;

	line = NULL;
	while (get_next_line(0, &line) > 0)
	{
		res = push_swap_handler(line, a, b);
		ft_strdel(&line);
		if (res == 0)
			return (0);
	}
	ft_strdel(&line);
	return (1);
}

int		main(int argc, char **argv)
{
	t_int_stack	*a;
	t_int_stack	*b;

	if (argc == 1)
		exit(0);
	if (fill_stack(argc, argv, &a, &b) == 0
		|| read_input(a, b) == 0)
	{
		ft_putendl_fd("Error", 2);
		return (1);
	}
	if (!stack_is_sort(a) || b->size != 0)
		ft_putendl("KO");
	else
		ft_putendl("OK");
	stack_deinit(&a);
	stack_deinit(&b);
}