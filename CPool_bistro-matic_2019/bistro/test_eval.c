#include <stdlib.h>

void my_putstr(char const *str);
int my_put_nbr(int nb);

char *eval_expr(char const *str)
{
    int i = 0;
    char *nbr1;
    char *nbr2;
    int temp = 0;

    while (str[i] >= '0' && str[i] <= '9')
        i = i + 1;
    nbr1 = malloc((my_strlen(str) + 1) * sizeof(char));
    temp = i;
    for (int j = 0; temp != 0; j++, temp--)
        nbr1[j] = str[j];
    while (str[i] == '+' || str[i] == '-')
        i = i + 1;
    temp = i;
    nbr2 = malloc((my_strlen(str) + 1) * sizeof(char));
    for (int j = i; str[j] >= '0' && str[j] <= '9'; j++) {
        while (j != i) {
            nbr2
        }
    }
}

void main(int ac, char **av)
{
    eval_expr(av[1]);
}
