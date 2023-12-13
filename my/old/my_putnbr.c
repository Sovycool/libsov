/*
** EPITECH PROJECT, 2023
** my_put_nbr
** File description:
** Print the int in argument
*/

#include "my.h"

static int my_put_nbr_rec(int nb)
{
    int current_digit = nb % 10;

    if (nb >= 0 && nb < 10) {
        my_putchar(48 + current_digit);
        return (0);
    } else if (nb < 0 && nb > -10) {
        my_putchar(48 + (current_digit * -1));
        return (0);
    }
    my_put_nbr_rec(nb / 10);
    if (current_digit < 0) {
        my_putchar(48 + (current_digit * -1));
    } else {
        my_putchar(48 + current_digit);
    }
}

int my_putnbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
    }
    my_put_nbr_rec(nb);
    return (0);
}
