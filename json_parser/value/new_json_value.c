/*
** EPITECH PROJECT, 2023
** json_parser
** File description:
** new_json_value
*/

#include "../../libsov/json_parser.h"
#include <stdlib.h>

json_value_t *new_json_value(
    void *value, json_value_type_t type)
{
    json_value_t *new_value = malloc(sizeof(json_value_t));

    switch (type) {
        case STRING:
            new_value->value.str_ = (char *)value;
        case INT:
            new_value->value.int_ = *(int *)value;
        case DOUBLE:
            new_value->value.double_ = *(double *)value;
        case OBJECT:
            new_value->value.object_ = (json_object_t *)value;
        case ARRAY:
            new_value->value.array_ = (json_array_t *)value;
        case VOID:
            new_value->value.void_ = value;
    }
    new_value->type = type;
    return new_value;
}
