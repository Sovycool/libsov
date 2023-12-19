/*
** EPITECH PROJECT, 2023
** json_parser
** File description:
** destroy_value
*/

#include "../json_parser.h"
#include <stdlib.h>

void destroy_value(json_value_t *value)
{
    if (value == NULL)
        return;
    switch (value->type) {
        case OBJECT :
            destroy_json(value->value.object_);
            break;
        case ARRAY :
            destroy_array(value->value.array_);
            break;
    }
    free(value);
}
