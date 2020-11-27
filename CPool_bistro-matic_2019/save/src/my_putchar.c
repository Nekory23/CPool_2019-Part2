/*
** EPITECH PROJECT, 2019
** putchar
** File description:
** 2019
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
