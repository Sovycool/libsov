/*
** EPITECH PROJECT, 2024
** LibSov
** File description:
** my_itoa
*/

#include "../my.h"

char *my_itoa(int nb)
{
    return my_int_to_base(nb, 10);
}
