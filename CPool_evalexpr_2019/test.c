#include <stdio.h>
#include <stdlib.h>

int convert_int(char const *str, int i)
{
    int number = 0;

    for (i; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            number = number * 10;
            number = number + (str[i] - '0');
        } else
            return (number);
    }
    return (number);
}

int eval_expr(char const *str)
{
    int i = 0;
    int nbr1 = convert_int(str, i);
    int nbr2;

    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9')
            i = i + 1;
    }
    nbr2 = convert_int(str, i);
    printf("%d", nbr1);
}

int main(void)
{
    int nbr = eval_expr("34+56");
}
