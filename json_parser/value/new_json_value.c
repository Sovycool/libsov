/*
** EPITECH PROJECT, 2023
** json_parser
** File description:
** new_json_value
*/

#include "../json_parser.h"
#include "../../linked_list/linked_list.h"
#include "../../my/my.h"
#include <stdlib.h>
    /*switch (type) {
        case STRING:
            new_value->value.str_ = (char *)value;
        case INT:
            new_value->value.int_ = my_atoi((char *)value);
        case DOUBLE:
            new_value->value.double_ = my_atof((char *)value);
        case OBJECT:
            new_value->value.object_ = (json_object_t *)value;
        case ARRAY:
            new_value->value.array_ = (linked_list_t *)value;
        case VOID:
            new_value->value.void_ = value;
    }*/

json_value_t *new_json_value(
    void *value, json_value_type_t type)
{
    json_value_t *new_value = malloc(sizeof(json_value_t));

    new_value->value.void_ = value;
    new_value->type = type;
    return new_value;
}
