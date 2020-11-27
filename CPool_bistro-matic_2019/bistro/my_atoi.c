/*
** EPITECH PROJECT, 2019
** bistro-matic
** File description:
** convert a string in an int
*/

#include "bistro.h"

int my_atoi(char const *str)
{
    int nbr = 0;
    int neg = 0;
    int pos = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '-' || str[i] == '+') {
            if (str[i] == '-')
                neg = neg + 1;
            if (str[i] == '+')
                pos = pos + 1;
        }
    }
    for (int i = neg + pos; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            i = i + 1;
        if (str[i] >= '0' && str[i] <= '9') {
            nbr = nbr * 10;
            nbr = nbr + (str[i] - '0');
        } else {
            if (neg % 2 == 1)
                nbr = nbr * -1;
            return (nbr);
        }
    }
    if (neg % 2 == 1)
        nbr = nbr * -1;
    return (nbr);
}
