/*
** EPITECH PROJECT, 2024
** Libsov
** File description:
** array_float_finder
*/

#include "../jpar.h"

double array_float_finder(json_array_t *array, int index)
{
    json_array_t *found_arr = array_finder(array, index);

    if (!found_arr || found_arr->type != JSON_FLOAT)
        return 0;
    return found_arr->value->json_float;
}
