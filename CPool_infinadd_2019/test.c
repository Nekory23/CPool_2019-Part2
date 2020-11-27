/*
** EPITECH PROJECT, 2019
** bjr
** File description:
** test
*/

#include <stdio.h>
#include <stdlib.h>
void my_putchar(char c);
int my_strlen(char const *str);
int my_putstr(char const *str);

char *add_simple_digits(char *nbr1, char *nbr2)
{
    char *res = malloc(2 * sizeof(char));
    int add;

    add = (nbr1[0] - '0') + (nbr2[0] - '0');
    res[0] = add + '0';
    return (res);
}

int main(int ac, char **av)
{
    char *res = add_simple_digits(av[1], av[2]);
    my_putstr(res);
    my_putchar('\n');
    free (res);
    return (0);
}
