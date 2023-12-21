/*
** EPITECH PROJECT, 2023
** json_parser
** File description:
** add_to_json
*/

#include "../json_parser.h"
#include "../../my/my.h"
#include <stdlib.h>

int add_to_json(json_object_t *json, char *key,
    void *value, json_value_type_t type)
{
    json_pair_t *pair = new_json_pair();

    pair->key = key;
    pair->value = new_json_value(value, type);
    add_to_list(json->pairs, pair);
    return 1;
}
