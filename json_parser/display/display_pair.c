/*
** EPITECH PROJECT, 2023
** json_parser
** File description:
** display_pair
*/

#include "../json_parser.h"
#include "../../my/my.h"

void display_pair(json_pair_t *pair)
{
    my_printf("\"%s\" : ", pair->key);
    switch (pair->value->type) {
        case STRING :
            my_printf("\"%s\"", pair->value->value.str_);
            break;
        case INT :
            my_printf("%d", pair->value->value.int_);
            break;
    }
}