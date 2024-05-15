/*
** EPITECH PROJECT, 2024
** LibSov
** File description:
** my_itoa
*/

#include "../my.h"

char *my_itoa(int nb)
{
    char *integer = my_int_to_base(my_abs(nb), 10);
    char *output = my_strcat("-", integer);

    free(integer);
    return output;
}
