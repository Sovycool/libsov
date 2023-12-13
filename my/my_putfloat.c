/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_printf
*/

#include "my.h"

int my_putfloat(double nb, int precision)
{
    int count = 0;
    int decimals;
    int precision_multiplier = my_pow(10, precision);

    if (nb < 0) {
        count += my_putchar('-');
        nb = my_abs(nb);
    }
    nb += 0.5 / precision_multiplier;
    count += my_putint(nb);
    if (precision != 0) {
        count += my_putchar('.');
        decimals = (nb - (int)nb) * precision_multiplier;
        while (precision_multiplier / 10 > decimals) {
            precision_multiplier /= 10;
            count += my_putchar('0');
        }
        count += my_putint(decimals);
    }
    return count;
}
