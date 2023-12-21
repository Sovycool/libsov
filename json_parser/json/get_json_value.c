/*
** EPITECH PROJECT, 2023
** json_parser
** File description:
** get_json_value
*/

#include "../json_parser.h"
#include "../../my/my.h"
#include <stdlib.h>

json_value_t *get_json_value(json_object_t *json, char *key)
{
    linked_list_t *pairs = json->pairs;
    json_pair_t *pair;
    int nb_pairs = list_len(pairs);

    for (int i = 0; i < nb_pairs; i++) {
        if (my_strcmp(pair->key, key) == 0)
            return pair->value;
        free(pair);
        pair = (json_pair_t *)get_list_at_index(pairs, i)->data;
    }
    return NULL;
}
