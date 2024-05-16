/*
** EPITECH PROJECT, 2024
** Libsov
** File description:
** my_lerp
*/

#include "../my.h"

double my_lerp(double a, double b, double t)
{
    return (1 - t) * a + t * b;
}
