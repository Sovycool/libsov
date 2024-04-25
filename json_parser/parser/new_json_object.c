/*
** EPITECH PROJECT, 2024
** Libsov
** File description:
** new_json_object
*/

#include "../jpar.h"

json_object_t *new_json_object(void)
{
    json_object_t *json = malloc(sizeof(json_object_t));

    if (!json)
        return NULL;
    json->next = NULL;
    json->type = JSON_NULL;
    json->value = malloc(sizeof(json_value_t));
    json->value->json_int = 0;
    json->value_name = NULL;
    return json;
}
