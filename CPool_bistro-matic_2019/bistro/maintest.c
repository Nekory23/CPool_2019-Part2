/*
** EPITECH PROJECT, 2019
** main
** File description:
** main eval_expr
*/

#include "bistro.h"

int main(int ac, char **av)
{
    char *res;

    if (ac == 2) {
        res = eval_expr(av[1]);
        my_putstr(res);
        my_putchar('\n');
        return (0);
    }
    return (84);
}
