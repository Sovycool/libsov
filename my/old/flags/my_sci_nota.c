/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** %e %E
*/

#include "../flag_funcs.h"
#include "../my.h"

static int my_print_e_low(int power)
{
    int counter = 1;

    my_putchar('e');
    if (power >= 0) {
        my_putchar('+');
        counter += 1;
    } else {
        my_putchar('-');
        power = power * -1;
        counter += 1;
    }
    if (power < 10) {
        my_putchar('0');
        counter += 1;
    }
    counter += my_flag_putnbr(power);
    return (counter);
}

static int my_print_e_up(int power)
{
    int counter = 1;

    my_putchar('E');
    if (power >= 0) {
        my_putchar('+');
        counter += 1;
    } else {
        my_putchar('-');
        power = power * -1;
        counter += 1;
    }
    if (power < 10) {
        my_putchar('0');
        counter += 1;
    }
    counter += my_flag_putnbr(power);
    return (counter);
}

int my_sci_nota_low(double nb)
{
    int power = 0;
    int counter = 2;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
        counter += 1;
    }
    while (nb >= 10) {
        nb = nb / 10;
        power += 1;
    }
    while (nb < 1) {
        nb = nb * 10;
        power -= 1;
    }
    counter += my_putfloat(nb);
    counter += my_print_e_low(power);
    return (counter);
}

int my_sci_nota_up(double nb)
{
    int power = 0;
    int counter = 2;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
        counter += 1;
    }
    while (nb >= 10) {
        nb = nb / 10;
        power += 1;
    }
    while (nb < 1) {
        nb = nb * 10;
        power -= 1;
    }
    counter += my_putfloat(nb);
    counter += my_print_e_up(power);
    return (counter);
}
