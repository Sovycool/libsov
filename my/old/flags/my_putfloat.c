/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** %f
*/

#include "../my.h"

static double my_abs(double nb)
{
    return (nb < 0 ? nb * -1 : nb);
}

static int print_sign(double nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
        return 1;
    }
    return 0;
}

static int recurcivity(int nb)
{
    int count = 0;

    nb = nb / 10;
    if (nb > 0) {
        count = recurcivity(nb);
        my_putchar(nb % 10 + 48);
        return (count + 1);
    } else
        return 0;
}

static int decimals_recurcivity(int nb, int precision)
{
    int count = 0;

    nb = nb / 10;
    if (precision > 0) {
        count = decimals_recurcivity(nb, precision - 1);
        my_putchar(nb % 10 + 48);
        return (count + 1);
    } else
        return 0;
}

int my_putfloat(double nb)
{
    int count = 0;
    int integers;
    int decimals;

    count += print_sign(nb);
    nb = my_abs(nb);
    integers = nb;
    decimals = ((nb - integers) * 10000000 + 5) / 10;
    if (decimals >= 1000000) {
        integers++;
        decimals -= 1000000;
    }
    count += recurcivity(integers);
    my_putchar(integers % 10 + 48);
    my_putchar('.');
    count++;
    count += decimals_recurcivity(decimals, 5);
    my_putchar(decimals % 10 + 48);
    return (count + 2);
}
