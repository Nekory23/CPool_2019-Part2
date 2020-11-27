/*
** EPITECH PROJECT, 2019
** bistro
** File description:
** eval_expr
*/

#include <stdlib.h>
#include "bistro.h"

char *convert_char(char const *str, int i)
{
    char *number;
    int temp = i;
    int j = 0;

    while (str[i] >= '0' && str[i] <= '9')
        i = i + 1;
    number = malloc((i + 1) * sizeof(char));
    for (temp; temp != i; temp++, j++)
        number[j] = str[temp];
    return (number);
}

char *eval_expr(char const *str)
{
    int i = 0;
    char *nbr1 = convert_char(str, i);
    char *nbr2;
    char *res;

    while (str[i] >= '0' && str[i] <= '9')
        i = i + 1;
    i = i + 1;
    nbr2 = convert_char(str, i);
    if (str[i - 1] == '+') {
        res = infin_add(nbr1, nbr2);
    }
    free(nbr1);
    free(nbr2);
    return (res);
}
