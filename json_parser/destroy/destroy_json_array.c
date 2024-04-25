/*
** EPITECH PROJECT, 2024
** Libsov
** File description:
** destroy_json_array
*/

#include "../jpar.h"

void destroy_json_array(json_array_t *array)
{
    if (!array)
        return;
    if (array->value)
        destroy_json_value(array->value, array->type);
    if (array->next)
        destroy_json_array(array->next);
    free(array);
}
