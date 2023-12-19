/*
** EPITECH PROJECT, 2023
** json_parser
** File description:
** new_json
*/

#include "../json_parser.h"
#include "../../linked_list/linked_list.h"
#include <stdlib.h>

json_object_t *new_json(void)
{
    json_object_t *json = malloc(sizeof(json_object_t));

    json->pairs = new_list();
    return json;
}
