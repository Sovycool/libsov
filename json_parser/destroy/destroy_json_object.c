/*
** EPITECH PROJECT, 2024
** Libsov
** File description:
** destroy_json_object
*/

#include "../jpar.h"

void destroy_json_object(json_object_t *json)
{
    if (!json)
        return;
    if (json->value_name)
        free(json->value_name);
    if (json->value)
        destroy_json_value(json->value, json->type);
    if (json->next)
        destroy_json_object(json->next);
    free(json);
}
