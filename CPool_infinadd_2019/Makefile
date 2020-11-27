##
## EPITECH PROJECT, 2019
## CPool_infinadd_2019
## File description:
## compile the infinadd
##

NAME	=	infin_add

SRC	=	test3.c		\
		my_putchar.c	\
		my_strlen.c	\
		my_revstr.c	\
		my_put_nbr.c	\
		my_putstr.c

OBJ	=	$(SRC:.c=.o)

RM	=	rm -f

CC	=	gcc

all	:	$(NAME)

$(NAME)	:	$(OBJ)
		$(CC) -o $(NAME) $(OBJ)

clean	:
		$(RM) $(OBJ)

fclean	:	clean
		$(RM) $(NAME)

re	:	fclean all
