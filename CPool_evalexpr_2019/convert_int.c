/*
** EPITECH PROJECT, 2019
** brouillon
** File description:
** convert an char * in an int
*/

#include <stdio.h>

int convert_int(char *str)
{
    int nbr = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
        nbr = nbr * 10;
        nbr = nbr + (str[i] - '0');
        }
    }
    return (nbr);
}
