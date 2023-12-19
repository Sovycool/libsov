/*
** EPITECH PROJECT, 2023
** json_parser
** File description:
** destroy_json
*/

#include "../json_parser.h"
#include <stdlib.h>

void destroy_json(json_object_t *json)
{
    linked_list_t *pair = json->pairs;

    while (pair->data != NULL) {
        destroy_pair((json_pair_t *)pair->data);
        pair = pair->next;
    }
    destroy_list(json->pairs);
    free(json);
}
