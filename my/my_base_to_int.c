/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_base_to_int
*/

#include "my.h"

static int char_to_int(char c)
{
    if ('0' <= c && c <= '9')
        return c - '0';
    return (c - 'A') + 10;
}

int my_base_to_int(char *nb, int base)
{
    int output = 0;

    nb = my_revstr(nb);
    for (int i = 0; nb[i] != 0; i++)
        output += char_to_int(nb[i]) * my_pow(base, i);
    return output;
}
