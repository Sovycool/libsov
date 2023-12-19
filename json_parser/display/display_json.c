/*
** EPITECH PROJECT, 2023
** json_parser
** File description:
** display_json
*/

#include "../json_parser.h"
#include "../../my/my.h"

void display_object(json_object_t *json, int tab)
{
    for (int i = 0; i < tab; i++)
        my_putchar('\t');
    my_printf("{\n");
    if (list_len(json->pairs))
        display_pairs(json->pairs, tab + 1);
    for (int i = 0; i < tab; i++)
        my_putchar('\t');
    my_printf("}\n");
}

void display_json(json_object_t *json)
{
    display_object(json, 0);
}
