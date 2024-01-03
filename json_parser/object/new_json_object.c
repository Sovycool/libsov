/*
** EPITECH PROJECT, 2023
** json_parser
** File description:
** new_json_object
*/

#include "../json_parser.h"
#include <stdlib.h>

json_object_t *new_json_object(void)
{
    json_object_t *json = malloc(sizeof(json_object_t));

    json->pairs = new_list();
    return json;
}
