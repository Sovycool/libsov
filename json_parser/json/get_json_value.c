/*
** EPITECH PROJECT, 2023
** json_parser
** File description:
** get_json_value
*/

#include "../jpar.h"
#include "../../my/my.h"
#include <stdlib.h>

void *get_json_value(json_object_t *json, char *key)
{
    linked_list_t *pairs = json->pairs;

    for (int i = 0; pairs->data != NULL; i++) {
        if (my_strcmp(((json_pair_t *)pairs->data)->key, key) == 0)
            return ((json_pair_t *)pairs->data)->value->value.void_;
        pairs = pairs->next;
    }
    return NULL;
}
