##
## EPITECH PROJECT, 2019
## bistro-matic
## File description:
## makefile
##

NAME	=	calc

SRC	=	bistro/infin_add.c	\
		bistro/eval_expr.c	\
		bistro/my_strlen.c	\
		bistro/my_putchar.c	\
		bistro/my_putstr.c	\
		bistro/my_revstr.c	\
		bistro/my_atoi.c	\
		bistro/main.c

OBJ	=	$(SRC:.c=.o)

CPPFLAGS=	-I./include/

CFLAGS	=	-W -Wextra -Wall -g3

all	:	$(OBJ)
		gcc $(CFLAGS) -o $(NAME) $(SRC) $(CPPFLAGS)

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)

re	:	fclean all

.PHONY	:	all clean fclean re
