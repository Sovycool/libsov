/*
** EPITECH PROJECT, 2024
** Libsov
** File description:
** array_string_finder
*/

#include "../jpar.h"

char *array_string_finder(json_array_t *array, int index)
{
    json_array_t *found_arr = array_finder(array, index);

    if (!found_arr || found_arr->type != JSON_STR)
        return NULL;
    return found_arr->value->json_string;
}
