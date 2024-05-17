/*
** EPITECH PROJECT, 2024
** Libsov
** File description:
** my_max
*/

#include "../my.h"

double my_max(double a, double b)
{
    if (a < b)
        return b;
    return a;
}
