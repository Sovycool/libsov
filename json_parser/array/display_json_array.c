/*
** EPITECH PROJECT, 2023
** json_parser
** File description:
** display_json_array
*/

#include "../json_parser.h"
#include "../../my/my.h"

void display_json_array(linked_list_t *array, int tab)
{
    linked_list_t *value = array;
    int nb_pairs = list_len(array);

    my_printf("[\n");
    for (int i = 0; i < nb_pairs; i++) {
        for (int i = 0; i < tab + 1; i++)
            my_putchar('\t');
        display_json_value((json_value_t *)value->data, tab);
        if (i + 1 < nb_pairs)
            my_printf(",\n");
        value = value->next;
    }
    my_putchar('\n');
    for (int i = 0; i < tab; i++)
        my_putchar('\t');
    my_printf("]");
}
