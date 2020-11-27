/*                                                                             
** EPITECH PROJECT, 2019                                                       
** infinadd                                                                    
** File description:                                                           
** infinadd                                                                    
*/

#include <stdio.h>
#include <stdlib.h>
#include "infin_add.h"

char *infin_add(char *nbr1, char *nbr2)
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
    char *res = infin_add(av[1], av[2]);
    res = my_revstr(res);
    my_putstr(res);
    my_putchar('\n');
    free(res);
    return (0);
}
