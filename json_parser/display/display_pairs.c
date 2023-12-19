/*
** EPITECH PROJECT, 2023
** json_parser
** File description:
** display_pairs
*/

#include "../json_parser.h"
#include "../../my/my.h"

void display_pairs(linked_list_t *pairs, int tab)
{
    linked_list_t *pair = pairs;
    int nb_pairs = list_len(pairs);

    for (int i = 0; i < nb_pairs; i++) {
        for (int i = 0; i < tab + 1; i++)
            my_putchar('\t');
        display_pair((json_pair_t *)pair->data, tab);
        if (i + 1 < nb_pairs)
            my_printf(",\n");
        pair = pair->next;
    }
    my_putchar('\n');
}
