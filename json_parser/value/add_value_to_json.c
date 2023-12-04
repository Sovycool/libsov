/*
** EPITECH PROJECT, 2023
** json_parser
** File description:
** add_value_to_json
*/

#include "../../libsov/json_parser.h"
#include "../../libsov/my.h"
#include <stdlib.h>

int sov_add_to_json(json_object_t *json, char *key,
    void *value, json_value_type_t type)
{
    json_pair_t **pair = &json->pairs;

    while (*pair != NULL) {
        my_printf("Loop\n");
        if (my_strcmp((*pair)->key, key) == 0)
            return 0;
        pair = (*pair)->next;
    }
    (*pair) = new_json_pair();
    (*pair)->key = key;
    (*pair)->value = new_json_value(value, type);
    return 1;
}
