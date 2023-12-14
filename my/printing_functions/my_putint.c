/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_put_nbr
*/

#include "../my.h"

static int my_put_nbr_rec(int nb)
{
    int current_digit = nb % 10;

    if (nb < 10)
        return my_putchar('0' + current_digit);
    return my_put_nbr_rec(nb / 10) + my_putchar('0' + current_digit);
}

int my_putint(int nb)
{
    int count = 0;

    if (nb < 0)
        count += my_putchar('-');
    count += my_put_nbr_rec(my_abs(nb));
    return count;
}
