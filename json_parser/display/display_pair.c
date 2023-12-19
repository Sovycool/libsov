/*
** EPITECH PROJECT, 2023
** json_parser
** File description:
** display_pair
*/

#include "../json_parser.h"
#include "../../my/my.h"

void display_pair(json_pair_t *pair, int tab)
{
    my_printf("\"%s\" : ", pair->key);
    display_value(pair->value, tab);
}
