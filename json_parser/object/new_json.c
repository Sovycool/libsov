/*
** EPITECH PROJECT, 2023
** json_parser
** File description:
** new_json
*/

#include "../../headers/json_parser.h"
#include <stdlib.h>

json_object_t *new_json(void)
{
    json_object_t *json = malloc(sizeof(json_object_t));

    json->pairs = NULL;
    return json;
}
