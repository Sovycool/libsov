/*
** EPITECH PROJECT, 2023
** json_parser
** File description:
** display_value
*/

#include "../json_parser.h"
#include "../../my/my.h"

void display_value(json_value_t *value, int tab)
{
    switch (value->type) {
        case STRING :
            my_printf("\"%s\"", value->value.str_);
            break;
        case INT :
            my_putint(value->value.int_);
            break;
        case DOUBLE :
            my_putfloat(value->value.double_);
            break;
        case OBJECT :
            display_object(value->value.object_, tab + 1);
            break;
    }
}
