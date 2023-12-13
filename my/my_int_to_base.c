/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_int_to_base
*/

#include "my.h"

static char int_to_char(int nb)
{
    if (nb < 10)
        return '0' + nb;
    return 'A' + (nb - 10);
}

static int output_len(int nb, int base)
{
    int i = 0;

    while (nb < 0) {
        nb = nb / base;
        i++;
    }
    return i;
}

char *my_int_to_base(int nb, int base)
{
    char *output = malloc(sizeof(char) * output_len(nb, base));

    for (int i = 0; nb > 0; i++) {
        output[i] = int_to_char(nb % base);
        nb /= base;
    }
    return my_revstr(output);
}
