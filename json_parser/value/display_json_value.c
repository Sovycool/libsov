/*
** EPITECH PROJECT, 2023
** json_parser
** File description:
** display_json_value
*/

#include "../json_parser.h"
#include "../../my/my.h"

static void display_number(double nb)
{
    if (nb == (int)nb)
        my_printfloat(nb, 0);
    else
        my_printfloat(nb, 3);
}

void display_json_value(json_value_t *value, int tab)
{
    switch (value->type) {
        case STRING :
            my_printf("\"%s\"", value->value.str_);
            break;
        case BOOL :
            if (*value->value.bool_)
                my_printf("true");
            else
                my_printf("false");
            break;
        case NUMBER :
            display_number(*value->value.number_);
            break;
        case OBJECT :
            display_json_object(value->value.object_, tab + 1);
            break;
        case ARRAY :
            display_json_array(value->value.array_, tab + 1);
            break;
    }
}
