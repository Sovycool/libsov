/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** %o
*/

#include "../my.h"

int recursivity(int nb)
{
    int count;

    nb = nb / 8;
    if (nb > 0) {
        count = recursivity(nb);
        my_putchar(nb % 8 + 48);
        return count + 1;
    } else
        return (0);
}

int my_octal(int nb)
{
    int count = 0;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
        count += 1;
    }
    count += recursivity(nb);
    my_putchar(nb % 8 + 48);
    return (count + 1);
}
