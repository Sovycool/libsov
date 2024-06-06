/*
** EPITECH PROJECT, 2023
** LibSov
** File description:
** my_int_to_base
*/

#include "../my.h"

static char int_to_char(int i)
{
    char *int_as_chars = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    return int_as_chars[i];
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

    if (nb < 0)
        return NULL;
    len = output_len(nb, base);
    output = malloc(sizeof(char) * (len + 1));
    if (!output)
        return NULL;
    if (base > 36 || base < 2)
        return NULL;
    for (int i = 0; i < len; i++) {
        output[i] = int_to_char(nb % base);
        nb /= base;
    }
    output[len] = 0;
    my_revstr(output);
    return output;
}
