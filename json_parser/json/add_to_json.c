/*
** EPITECH PROJECT, 2023
** json_parser
** File description:
** add_to_json
*/

#include "../jpar.h"
#include "../../my/my.h"
#include <stdlib.h>

int add_to_json(json_object_t *json, char *key,
    void *value, json_value_type_t type)
{
    json_pair_t *pair = new_json_pair();

    if (get_json_value(json, key) == NULL) {
        pair->key = my_strdup(key);
        pair->value = new_json_value(value, type);
        add_to_list(json->pairs, pair, -1);
        return 1;
    }
    return 0;
}
