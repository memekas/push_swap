/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbearded <sbearded@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 15:50:02 by sbearded          #+#    #+#             */
/*   Updated: 2019/10/30 02:03:22 by sbearded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int		rule_handler(const char *command, t_stack *a, t_stack *b)
{
	if (a == NULL || a->arr == NULL || b == NULL || b->arr == NULL)
		return (0);
	if (ft_strcmp(command, "sa") == 0)
		return (rule_sa(a, 0));
	else if (ft_strcmp(command, "sb") == 0)
		return (rule_sa(b, 0));
	else if (ft_strcmp(command, "ss") == 0)
		return (rule_ss(a, b, 0));
	else if (ft_strcmp(command, "pa") == 0)
		return (rule_pa(a, b, 0));
	else if (ft_strcmp(command, "pb") == 0)
		return (rule_pb(a, b, 0));
	else if (ft_strcmp(command, "ra") == 0)
		return (rule_ra(a, 0));
	else if (ft_strcmp(command, "rb") == 0)
		return (rule_rb(b, 0));
	else if (ft_strcmp(command, "rr") == 0)
		return (rule_rr(a, b, 0));
	else if (ft_strcmp(command, "rra") == 0)
		return (rule_rra(a, 0));
	else if (ft_strcmp(command, "rrb") == 0)
		return (rule_rrb(b, 0));
	else if (ft_strcmp(command, "rrr") == 0)
		return (rule_rrr(a, b, 0));
	return (0);
}

int		read_input(t_stack *a, t_stack *b)
{
	char	*line;
	int		res;

	line = NULL;
	while (get_next_line(0, &line) > 0)
	{
		res = rule_handler(line, a, b);
		ft_strdel(&line);
		if (res == 0)
			return (0);
	}
	ft_strdel(&line);
	return (1);
}

int		main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	if (argc == 1)
		return (1);
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
