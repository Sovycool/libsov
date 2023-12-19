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
    free(pair->value);
    free(pair);
}
