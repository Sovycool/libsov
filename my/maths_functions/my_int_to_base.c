/*
** EPITECH PROJECT, 2023
** LibSov
** File description:
** my_int_to_base
*/

#include "../my.h"
#include <stdlib.h>

static char int_to_char(int nb)
{
    if (nb < 10)
        return '0' + nb;
    return 'A' + (nb - 10);
}

static int output_len(int nb, int base)
{
    int i = 0;

    while (nb > 0) {
        nb = nb / base;
        i++;
    }
    return i;
}

char *my_int_to_base(int nb, int base)
{
    int len = output_len(nb, base);
    char *output = malloc(sizeof(char) * (len + 1));

    for (int i = 0; i < len; i++) {
        output[i] = int_to_char(nb % base);
        nb /= base;
    }
    output[len] = 0;
    my_revstr(output);
    return output;
}
