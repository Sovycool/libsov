/*
** EPITECH PROJECT, 2023
** json_parser
** File description:
** display_json_value
*/

#include "../json_parser.h"
#include "../../my/my.h"

void display_json_value(json_value_t *value, int tab)
{
    switch (value->type) {
        case STRING :
            my_printf("\"%s\"", value->value.str_);
            break;
        case INT :
            my_putint(value->value.int_);
            break;
        case DOUBLE :
            my_putfloat(*value->value.double_);
            break;
        case OBJECT :
            display_json_object(value->value.object_, tab + 1);
            break;
        case ARRAY :
            display_json_array(value->value.array_, tab + 1);
            break;
    }
}
