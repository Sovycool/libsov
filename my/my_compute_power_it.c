/*
** EPITECH PROJECT, 2023
** my_compute_power_it
** File description:
** Power of (it)
*/

#include "my.h"

int my_compute_power_it(int nb, int p)
{
    int output = 1;

    if (p < 0)
        return 0;
    for (int i = 0; i < p; i++) {
        output = my_check_int_overflow('*', output, nb);
    }
    return output;
}
