/*
** EPITECH PROJECT, 2019
** CPool_infinadd_2019
** File description:
** to do infinite additions
*/

#include <unistd.h>
#include <stdlib.h>

void my_putchar(char c);
int my_strlen(char const *str);
int my_putstr(char const *str);

char *infin_add(char *nb1, char *nb2)
{
    int len1 = my_strlen(nb1);
    int len2 = my_strlen(nb2);
    char *res = malloc((len1 + len2 + 1) * (sizeof(char)));
    int add;
    int ret = 0;

    for (int i = 0; len1 != 0 && len2 != 0; i++, len1--, len2--) {
        add = (nb1[len1] - '0') + (nb2[len2] - '0') + ret;
    }
    return(res);
}

int main(int ac, char **av)
{
    char *result = infin_add(av[1], av[2]);
    my_putstr(result);
    my_putchar('\n');
    free(result);
    return (0);
}
