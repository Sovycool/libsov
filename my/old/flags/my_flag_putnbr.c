/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** %d %i
*/

#include "../my.h"

static int recursivity(int nb)
{
    int count = 0;

    nb = nb / 10;
    if (nb > 0) {
        count = recursivity(nb);
        my_putchar(nb % 10 + 48);
        return (count + 1);
    } else
        return (0);
}

int my_flag_putnbr(int nb)
{
    int count = 0;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
        count += 1;
    }
    count += recursivity(nb);
    my_putchar(nb % 10 + 48);
    return (count + 1);
}
