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
    int nb_pairs = list_len(pairs);

    for (int i = 0; i < nb_pairs; i++) {
        for (int i = 0; i < tab; i++)
            my_putchar('\t');
        display_pair((json_pair_t *)get_list_at_index(pairs, i)->data);
        if (i + 1 < nb_pairs)
            my_printf(",\n");
    }
    my_putchar('\n');
}
