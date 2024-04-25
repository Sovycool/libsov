/*
** EPITECH PROJECT, 2024
** Libsov
** File description:
** new_json_array
*/

#include "../jpar.h"

json_array_t *new_json_array(void)
{
    json_array_t *array = malloc(sizeof(json_array_t));

    if (!array)
        return NULL;
    array->next = NULL;
    array->type = JSON_NULL;
    array->value = malloc(sizeof(json_value_t));
    array->value->json_int = 0;
    return array;
}
