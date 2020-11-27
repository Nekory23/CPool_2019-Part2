/*
** EPITECH PROJECT, 2019
** infinadd
** File description:
** infinadd
*/

#include <stdio.h>
#include <stdlib.h>

void my_putchar(char c);
int my_strlen(char const *str);
char *my_revstr(char *str);
void my_putstr(char const *str);

char *add_same_length_digits(char *nbr1, char *nbr2)
{
    int msize = my_strlen(nbr1) + my_strlen(nbr2);
    char *res = malloc((msize + 1) * sizeof(char));
    int add;
    int j = 0;

    for (int i = my_strlen(nbr1) - 1; i != -1; i--, j++) {
        add = (nbr1[i] - '0') + (nbr2[i] - '0');
        res[j] = add + '0';
    }
    return (res);
}

int main(int ac, char **av)
{
    char *res = add_same_length_digits(av[1], av[2]);
    res = my_revstr(res);
    my_putstr(res);
    my_putchar('\n');
    free(res);
    return (0);
}
