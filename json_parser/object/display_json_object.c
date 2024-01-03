/*
** EPITECH PROJECT, 2023
** json_parser
** File description:
** display_json_object
*/

#include "../jpar.h"
#include "../../my/my.h"

void display_json_object(json_object_t *object, int tab)
{
    my_printf("{\n");
    if (list_len(object->pairs))
        display_json_pairs(object->pairs, tab);
    for (int i = 0; i < tab; i++)
        my_putchar('\t');
    my_putchar('}');
    if (tab == 0)
        my_putchar('\n');
}
