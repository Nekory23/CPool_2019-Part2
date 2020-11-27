/*
** EPITECH PROJECT, 2019
** bistro
** File description:
** infinadd
*/

#include <unistd.h>
#include <stdlib.h>
#include "infin_add.h"

char *add_same_length(char *nbr1, char *nbr2, char *res)
{
    int add;
    int j = 0;
    int ret = 0;

    for (int i = my_strlen(nbr1) - 1; i != -1; i--, j++) {
        add = (nbr1[i] - '0') + (nbr2[i] - '0') + ret;
        if (add >= 10) {
            add = add % 10;
            ret = 1;
        } else
            ret = 0;
        res[j] = add + '0';
    }
    if (ret == 1)
        res[j] = '1';
    return (res);
}

char *make_same_length(char *nbr1, char *nbr2, char *res)
{
    char *new_str;
    int i = 0;
    int len1 = my_strlen(nbr1);
    int len2 = my_strlen(nbr2);

    if (len1 > len2) {
        new_str = malloc((len1 + 1) * sizeof(char));
        for (int temp = len1 - len2; temp != 0; temp--, i++)
            new_str[i] = '0';
        for (int temp = 0; nbr1[temp] != '\0'; i++, temp++)
            new_str[i] = nbr2[temp];
        res = add_same_length(nbr1, new_str, res);
    }
    if (len1 < len2) {
        new_str = malloc((len2 + 1) * sizeof(char));
        for (int temp = len2 - len1; temp != 0; temp--, i++)
            new_str[i] = '0';
        for (int temp = 0; nbr2[temp] != '\0'; i++, temp++)
            new_str[i] = nbr1[temp];
        res = add_same_length(new_str, nbr2, res);
    }
    return (res);
}

char *infin_add(char *nbr1, char *nbr2)
{
    int msize = my_strlen(nbr1) + my_strlen(nbr2);
    char *res = malloc((msize + 1) * sizeof(char));
    char *temp;

    if (my_strlen(nbr1) == my_strlen(nbr2))
        res = add_same_length(nbr1, nbr2, res);
    else
        make_same_length(nbr1, nbr2, res);
    res = my_revstr(res);
    return (res);
}

int main(int ac, char **av)
{
    char *res;

    if (ac < 3 || ac > 3)
        write(2, "error, number of arguments\n", 27);
    else {
        res = infin_add(av[1], av[2]);
        my_putstr(res);
        my_putchar('\n');
        free(res);
    }
    return (0);
}
