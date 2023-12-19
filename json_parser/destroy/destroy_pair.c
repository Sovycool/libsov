/*
** EPITECH PROJECT, 2023
** json_parser
** File description:
** destroy_pair
*/

#include "../json_parser.h"
#include <stdlib.h>

void destroy_pair(json_pair_t *pair)
{
    switch (pair->value->type) {
        case OBJECT :
            destroy_json(pair->value->value.object_);
        default:
            free(pair->value);
            free(pair);
            break;
    }
}
