/*
** EPITECH PROJECT, 2024
** Libsov
** File description:
** array_object_finder
*/

#include "../jpar.h"

json_object_t *array_object_finder(json_array_t *array, int index)
{
    json_array_t *found_arr = array_finder(array, index);

    if (!found_arr || found_arr->type != JSON_OBJECT)
        return NULL;
    return found_arr->value->json_object;
}
