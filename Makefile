##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## makefile
##

SRC	=	src/number.c	\
		src/infin_add.c	\
		src/infin_sub_pos_neg.c	\
		src/infin_sub_neg_pos.c	\
		src/infin_mult.c	\
		src/infin_div.c	\
		src/infin_mod.c	\
		src/factors_for_summands.c	\
		src/summands_factors.c	\
		src/my_manage_par1.c	\
		src/my_manage_par2.c	\
		src/my_eval_expr_main.c	\
		src/my_errors_eval_expr.c	\
		src/my_errors_eval_expr2.c

OBJ	=	$(SRC:.c=.o)

LDFLAGS	=	-Llib/my -lmy

CC	=	gcc

CFLAGS	=	-g3

NAME	=	calc

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C lib/my
	$(CC) $(OBJ) -o $(NAME) $(LDFLAGS)
clean:
	make -C lib/my clean
	rm -f $(OBJ)

fclean: clean
	make -C lib/my fclean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
