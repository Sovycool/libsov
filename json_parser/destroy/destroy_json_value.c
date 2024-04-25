/*
** EPITECH PROJECT, 2024
** Libsov
** File description:
** destroy_json_value
*/

#include "../jpar.h"

void destroy_json_value(json_value_t *value, json_value_type_t type)
{
    switch (type) {
        case JSON_ARRAY:
            destroy_json_array(value->json_array);
            break;
        case JSON_OBJECT:
            destroy_json_object(value->json_object);
            break;
        case JSON_STR:
            if (value->json_string)
                free(value->json_string);
        default:
            break;
    }
    free(value);
}
