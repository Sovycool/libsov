/*
** EPITECH PROJECT, 2023
** my_compute_power_rec
** File description:
** Power of (rec)
*/

#include "my.h"

int my_compute_power_rec(int nb, int p)
{
    int output;

    if (p < 0)
        return 0;
    if (p == 0)
        return 1;
    output = my_compute_power_rec(nb, p - 1);
    return my_check_int_overflow('*', output, nb);
}
