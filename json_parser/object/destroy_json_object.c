/*
** EPITECH PROJECT, 2023
** json_parser
** File description:
** destroy_json_object
*/

#include "../jpar.h"
#include <stdlib.h>

void destroy_json_object(json_object_t *json)
{
    linked_list_t *pair;

    if (json->pairs == NULL)
        return;
    pair = json->pairs;
    while (pair->data != NULL) {
        destroy_json_pair((json_pair_t *)pair->data);
        pair = pair->next;
    }
    destroy_list(json->pairs);
    free(json);
}
