##
## EPITECH PROJECT, 2018
## Makefile 
## File description:
## Makefile
##

SRC	=	testnbrnégative.c\
		my_put_nbr.c\
		my_putchar.c\

OBJ	=	$(SRC:.c=.o)

NAME	=	calc

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(SRC)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all

.PHONY:		all clean fclean re

