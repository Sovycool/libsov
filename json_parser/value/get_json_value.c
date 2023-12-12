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
    json_pair_t **pair = &json->pairs;

    while (*(pair) != NULL) {
        my_printf("%s\n", (*pair)->key);
        if (my_strcmp((*pair)->key, key) == 0)
            return (*pair)->value;
        pair = &(*pair)->next;
    }
    return NULL;
}
