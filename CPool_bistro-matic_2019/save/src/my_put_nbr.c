/*
** EPITECH PROJECT, 2019
** put_nbr
** File description:
** 2019
*/

#include <unistd.h>

void my_putchar(char c);

int my_isneg2(int n)
{
    if (n < 0) {
        my_putchar('-');
        n = n * -1;
    }
    return (n);
}

int my_put_nbr(int nb)
{
    nb = my_isneg2(nb);
    if (nb <= 10) {
        my_putchar(nb + '0');
    }
    else {
        my_put_nbr(nb/10);
        my_put_nbr(nb%10);
    }
}
