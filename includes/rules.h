/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbearded <sbearded@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/29 17:24:17 by sbearded          #+#    #+#             */
/*   Updated: 2019/10/29 18:46:29 by sbearded         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RULES_H
# define RULES_H

# include "stack.h"
# include <stdio.h>

# define INT_MIN (2147483648L)
# define INT_MAX (2147483647)
# define DEBUG_PRINT(lvl,print) DEBUG_LVL_1(lvl,print) DEBUG_LVL_2(lvl, print)
# define DEBUG_LVL_1(lvl,print) if((lvl) == 1) {printf("%s\n", print);}
# define DEBUG_LVL_2(lvl, print) if((lvl) == 2) {rule_print(print, a, b);}
# define SA(debug_lvl) {rule_sa(a); DEBUG_PRINT(debug_lvl, "sa")}
# define SB(debug_lvl) {rule_sb(b); DEBUG_PRINT(debug_lvl, "sb");}
# define SS(debug_lvl) {rule_ss(a, b); DEBUG_PRINT(debug_lvl, "ss");}
# define PA(debug_lvl) {rule_pa(a, b); DEBUG_PRINT(debug_lvl, "pa")}
# define PB(debug_lvl) {rule_pb(a, b); DEBUG_PRINT(debug_lvl, "pb");}
# define RA(debug_lvl) {rule_ra(a); DEBUG_PRINT(debug_lvl, "ra");}
# define RB(debug_lvl) {rule_rb(b); DEBUG_PRINT(debug_lvl, "rb");}
# define RR(debug_lvl) {rule_rr(a, b); DEBUG_PRINT(debug_lvl, "rr");}
# define RRA(debug_lvl) {rule_rra(a); DEBUG_PRINT(debug_lvl, "rra");}
# define RRB(debug_lvl) {rule_rrb(b); DEBUG_PRINT(debug_lvl, "rrb");}
# define RRR(debug_lvl) {rule_rrr(a, b); DEBUG_PRINT(debug_lvl, "rrr");}

int		rule_sa(t_stack *a);
int		rule_sb(t_stack *b);
int		rule_ss(t_stack *a, t_stack *b);
int		rule_pa(t_stack *a, t_stack *b);
int		rule_pb(t_stack *a, t_stack *b);
int		rule_ra(t_stack *a);
int		rule_rb(t_stack *b);
int		rule_rr(t_stack *a, t_stack *b);
int		rule_rra(t_stack *a);
int		rule_rrb(t_stack *b);
int		rule_rrr(t_stack *a, t_stack *b);

#endif
