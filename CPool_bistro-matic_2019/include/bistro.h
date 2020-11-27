/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** infinadd
*/

#ifndef __BISTRO_H__
#define __BISTRO_H__

char *convert_char(char const *str, int i);
char *eval_expr(char const *str);
void my_putchar(char c);
int my_strlen(char const *str);
char *my_revstr(char *str);
void my_putstr(char const *str);
int my_put_nbr(int nb);
char *add_same_length(char *nbr1, char *nbr2, char *res);
char *make_same_length(char *nbr1, char *nbr2, char *res);
char *infin_add(char *nbr1, char *nbr2);
int my_atoi(char const *);

#endif
