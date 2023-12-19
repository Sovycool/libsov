/*
** EPITECH PROJECT, 2023
** json_parser
** File description:
** new_json_pair
*/

#include "../json_parser.h"
#include <stdlib.h>

json_pair_t *new_json_pair(void)
{
    json_pair_t *new_pair = malloc(sizeof(json_pair_t));

    new_pair->key = NULL;
    new_pair->value = NULL;
    return new_pair;
}
