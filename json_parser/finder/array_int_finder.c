/*
** EPITECH PROJECT, 2024
** Libsov
** File description:
** array_int_finder
*/

#include "../jpar.h"

int array_int_finder(json_array_t *array, int index)
{
    json_array_t *found_arr = array_finder(array, index);

    if (!found_arr || found_arr->type != JSON_INT)
        return 0;
    return found_arr->value->json_int;
}
