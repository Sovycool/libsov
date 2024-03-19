/*
** EPITECH PROJECT, 2023
** LibSov
** File description:
** my_printint
*/

#include "../my.h"

static int my_printint_rec(int nb)
{
    int current_digit = nb % 10;

    if (nb < 10)
        return my_putchar('0' + current_digit);
    return my_printint_rec(nb / 10) + my_putchar('0' + current_digit);
}

int my_printint(int nb, int precision)
{
    int count = 0;
    int precision_multiplier = my_pow(10, precision);

    precision_multiplier /= 10;
    if (nb < 0)
        count += my_putchar('-');
    nb = my_abs(nb);
    while (precision_multiplier > nb) {
        count += my_putchar('0');
        precision_multiplier /= 10;
    }
    count += my_printint_rec(nb);
    return count;
}
