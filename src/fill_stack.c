/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbearded <sbearded@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 17:03:53 by sbearded          #+#    #+#             */
/*   Updated: 2019/10/29 18:47:28 by sbearded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static int	check_int(char *str, int *num)
{
	char	*num_str;
	int		res;

	*num = ft_atoi(str);
	num_str = ft_itoa(*num);
	res = ft_strequ(str, num_str);
	free(num_str);
	if (res)
		return (1);
	else
		return (0);
}

static int	check_dup(t_stack *a, int num)
{
	int		i;
	int		*arr;

	i = a->size;
	arr = a->arr;
	while (--i >= 0)
	{
		if (arr[i] == num)
			return (0);
	}
	return (1);
}

int			fill_stack(int argc, char **argv, t_stack **a, t_stack **b)
{
	int		num;
	char	**str;
	char	**tmp;

	*a = stack_init();
	*b = stack_init();
	while (--argc > 0)
	{
		str = ft_strsplit(argv[argc], ' ');
		tmp = str;
		while (str && *str)
		{
			if (!check_int(*str, &num) || !check_dup(*a, num))
			{
				ft_2d_del(&tmp);
				return (0);
			}
			stack_put(*a, num);
			str++;
		}
		ft_2d_del(&tmp);
	}
	return (1);
}
