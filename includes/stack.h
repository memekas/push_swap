/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbearded <sbearded@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 16:48:28 by sbearded          #+#    #+#             */
/*   Updated: 2019/10/29 18:46:35 by sbearded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _STACK_H
# define _STACK_H

# include "libft.h"

# define STACK_STEP 1
# if STACK_STEP < 1
#  error STACK_STEP must be >= 1
# endif

# define CH_NULL(x) if((x) == NULL) exit (-1);
# define FIRST(stack) ((stack)->arr[(stack)->size - 1])
# define SECOND(stack) ((stack)->arr[(stack)->size - 2])
# define THIRST(stack) ((stack)->arr[(stack)->size - 3])
# define MAX_3(s) (FIRST(s) > SECOND(s) && FIRST(s) > THIRST(s))
# define MIN_3(s) (FIRST(s) < SECOND(s) && FIRST(s) < THIRST(s))
# define LAST(stack) ((stack)->arr[0])

typedef struct		s_stack
{
	int				*arr;
	unsigned int	size;
}					t_stack;

t_stack				*stack_init(void);
int					stack_resize(t_stack *stack, unsigned int new_size);
int					stack_put(t_stack *stack, int value);
int					stack_pull(t_stack *stack);
int					stack_rotate(t_stack *stack);
int					stack_rev_rotate(t_stack *stack);
int					stack_swap(t_stack *stack);
void				stack_print(t_stack stack);
t_stack				*stack_copy(t_stack **dst, t_stack *src);
void				stack_deinit(t_stack **stack);
int					stack_is_sort(t_stack *a);

#endif
