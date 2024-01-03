/*
** EPITECH PROJECT, 2023
** json_parser
** File description:
** destroy_json_pair
*/

#include "../json_parser.h"
#include <stdlib.h>

void destroy_json_pair(json_pair_t *pair)
{
    if (pair == NULL)
        return;
    free(pair->key);
    destroy_json_value(pair->value);
    free(pair);
}
