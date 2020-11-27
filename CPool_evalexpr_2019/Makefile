##
## EPITECH PROJECT, 2018
## Makefile 
## File description:
## Makefile
##

SRC	=	eval_expr.c	\
		my_putchar.c	\
		my_put_nbr.c	

OBJ	=	$(SRC:.c=.o)

NAME	=	eval_expr

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(SRC)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all

.PHONY:		all clean fclean re

