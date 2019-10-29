# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbearded <sbearded@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/29 14:00:13 by sbearded          #+#    #+#              #
#    Updated: 2019/10/30 00:25:06 by sbearded         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME_PUSH =		push_swap
NAME_CHECK =	checker

INC = 			includes
INC_H =			libft/includes

LIBFT_DIR =		libft
LIBFT =			$(LIBFT_DIR)/libft.a

SRC_DIR =		src/
ST_DIR =		$(SRC_DIR)stack/
RL_DIR =		$(SRC_DIR)rules/

H_CH =			$(INC)/checker.h
H_ST =			$(INC)/stack.h
H_RL =			$(INC)/rules.h
H_PS =			$(INC)/push_swap.h

CH = 			checker.c
PS =			push_swap.c
SRC =			fill_stack.c fill_sort.c sort.c check_sort_round.c \
				rotate_stack.c find_move.c
ST =			init_stack.c stack_deinit.c stack_pull.c stack_resize.c \
				stack_rotate.c stack_copy.c stack_print.c stack_put.c \
				stack_rev_rotate.c stack_swap.c stack_is_sort.c
RL =			swap_p.c swap_r.c swap_rr.c swap_s.c

PATH_CH =		$(CH:%=$(SRC_DIR)%)
PATH_PS =		$(PS:%=$(SRC_DIR)%)
PATH_SRC =		$(SRC:%=$(SRC_DIR)%)
PATH_ST =		$(ST:%=$(ST_DIR)%)
PATH_RL =		$(RL:%=$(RL_DIR)%)

OBJ_DIR = 		obj/

OBJ_CH = 		$(CH:%.c=%.o)
OBJ_PS = 		$(PS:%.c=%.o)
OBJ_SRC = 		$(SRC:%.c=%.o)
OBJ_ST = 		$(ST:%.c=%.o)
OBJ_RL = 		$(RL:%.c=%.o)

PATH_OBJ_CH =		$(addprefix $(OBJ_DIR), $(OBJ_CH))
PATH_OBJ_PS =		$(addprefix $(OBJ_DIR), $(OBJ_PS))
PATH_OBJ_SRC =		$(addprefix $(OBJ_DIR), $(OBJ_SRC))
PATH_OBJ_ST =		$(addprefix $(OBJ_DIR), $(OBJ_ST))
PATH_OBJ_RL =		$(addprefix $(OBJ_DIR), $(OBJ_RL))

OBJ = 				$(PATH_OBJ_SRC) $(PATH_OBJ_ST) $(PATH_OBJ_RL)

WFLAGS = 			-Wall -Wextra -Werror
COMP = 				gcc -g $(WFLAGS) -I $(INC) -I $(INC_H) -c -o

all:				$(OBJ_DIR) $(NAME_CHECK) $(NAME_PUSH)

$(OBJ_DIR):	
					@mkdir -p $(OBJ_DIR)

$(NAME_CHECK):		do_libft $(PATH_OBJ_CH) $(OBJ)
					@gcc -g $(WFLAGS) $(PATH_OBJ_CH) $(PATH_OBJ_SRC) $(PATH_OBJ_ST) $(PATH_OBJ_RL)\
					$(LIBFT) \
					-o $(NAME_CHECK) -I $(INC) -I $(INC_H)

$(NAME_PUSH):		do_libft $(PATH_OBJ_PS) $(OBJ)
					@gcc -g $(WFLAGS) $(PATH_OBJ_PS) $(PATH_OBJ_SRC) $(PATH_OBJ_ST) $(PATH_OBJ_RL)\
					$(LIBFT) \
					-o $(NAME_PUSH) -I $(INC) -I $(INC_H)

$(PATH_OBJ_CH):		$(PATH_CH) $(H_CH)
					@$(MAKE) $(OBJ_CH)

$(PATH_OBJ_PS):		$(PATH_PS) $(H_CH) $(H_PS)
					@$(MAKE) $(OBJ_PS)

$(PATH_OBJ_SRC):	$(PATH_SRC) $(H_CH)
					@$(MAKE) $(OBJ_SRC)

$(PATH_OBJ_ST):		$(PATH_ST) $(H_ST)
					@$(MAKE) $(OBJ_ST)

$(PATH_OBJ_RL):		$(PATH_RL) $(H_RL)
					@$(MAKE) $(OBJ_RL)

$(OBJ_SRC):
					@$(COMP) $(OBJ_DIR)$@ $(SRC_DIR)$(@:%.o=%.c)

$(OBJ_CH):
					@$(COMP) $(OBJ_DIR)$@ $(SRC_DIR)$(@:%.o=%.c)

$(OBJ_PS):
					@$(COMP) $(OBJ_DIR)$@ $(SRC_DIR)$(@:%.o=%.c)

$(OBJ_ST):
					@$(COMP) $(OBJ_DIR)$@ $(ST_DIR)$(@:%.o=%.c)

$(OBJ_RL):
					@$(COMP) $(OBJ_DIR)$@ $(RL_DIR)$(@:%.o=%.c)

do_libft:
				@make -C $(LIBFT_DIR)

clean:
				@/bin/rm -rf $(OBJ_DIR)
				@make -C $(LIBFT_DIR) clean

fclean: 		clean
				@/bin/rm -f $(NAME_CHECK)
				@/bin/rm -f $(NAME_PUSH)
				@make -C $(LIBFT_DIR) fclean

re: 			fclean all



