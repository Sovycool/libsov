/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** %g %G
*/

#include "../my.h"
#include <unistd.h>

static int power(int nb, int powerer)
{
    int output = 1;

    while (powerer > 0) {
        output *= nb;
        powerer--;
    }
    return output;
}

static int my_putfloat_prec(double nb, int precision)
{
    int integers = nb;
    int n = precision;

    nb = nb - integers;
    while (n + 1 > 0) {
        nb = nb * 10;
        n -= 1;
    }
    n = precision;
    nb += 5;
    nb = nb / 10;
    if (nb >= power(10, n)) {
        integers++;
        nb -= power(10, n);
    }
    my_putnbr(integers);
    my_putchar('.');
    my_putnbr(nb);
    return 0;
}

static int int_len(int nb)
{
    int counter = 0;

    while (nb > 0) {
        nb = nb / 10;
        counter += 1;
    }
    return (counter);
}

static int zero_counter(int limit, double nb)
{
    int counter = 0;

    nb = nb * 10;
    while ((int)nb % 10 == 0 && limit > 0) {
        nb = nb * 10;
        limit = limit - 1;
        counter += 1;
    }
    return (counter);
}

int my_short_low(double nb)
{
    nb = nb;
    return 0;
}

int my_short_up(double nb)
{
    nb = nb;
    return 0;
}
/*      SHORT_LOW
    int counter = 0;
    int integer = nb;
    int decimal_int = (((nb - integer) * 10000000) + 5) / 10;
    double decimal_float = nb - integer;
    int len = int_len(integer);
    int nb_zero = zero_counter(6, nb);

    if (len < 6 && nb_zero < 6 - len) {
        my_putfloat_prec(nb, 6 - len);
    } else if (len < 6) {
        my_putnbr(integer);
    }
*/

/*      SHORT_UP
    int counter = 0;
    int integer = nb;
    int decimal_int = (((nb - integer) * 10000000) + 5) / 10;
    double decimal_float = nb - integer;
    int len = int_len(integer);
    int nb_zero = zero_counter(6, nb);

    if (len < 6 && nb_zero < 6 - len) {
        my_putfloat_prec(nb, 6 - len);
    } else if (len < 6) {
        my_putnbr(integer);
    }
    */
