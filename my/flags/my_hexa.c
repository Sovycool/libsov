/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** %x %X
*/

#include "../my.h"

static int recursivity_up(int nb)
{
    int count = 0;

    nb = nb / 16;
    if (nb > 0) {
        count = recursivity_up(nb);
        my_putchar((nb % 16 < 10 ? nb % 16 + 48 : nb % 16 - 10 + 'A'));
        return (count + 1);
    } else
        return 0;
}

static int recursivity_low(int nb)
{
    int count = 0;

    nb = nb / 16;
    if (nb > 0) {
        count = recursivity_low(nb);
        my_putchar((nb % 16 < 10 ? nb % 16 + 48 : nb % 16 - 10 + 'a'));
        return (count + 1);
    } else
        return 0;
}

int my_hexa_up(int nb)
{
    int count = 0;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
        count += 1;
    }
    count += recursivity_up(nb);
    my_putchar((nb % 16 < 10 ? nb % 16 + 48 : nb % 16 - 10 + 'A'));
    return (count + 1);
}

int my_hexa_low(int nb)
{
    int count = 0;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
        count += 1;
    }
    count += recursivity_low(nb);
    my_putchar((nb % 16 < 10 ? nb % 16 + 48 : nb % 16 - 10 + 'a'));
    return (count + 1);
}
