/*
** EPITECH PROJECT, 2023
** json_parser
** File description:
** destroy_json_array
*/

#include "../json_parser.h"
#include "../../linked_list/linked_list.h"
#include <stdlib.h>

void destroy_json_array(linked_list_t *list)
{
    linked_list_t *value = list;

    if (list == NULL)
        return;
    while (value->data != NULL) {
        destroy_json_value((json_value_t *)value->data);
        value = value->next;
    }
    destroy_list(list);
}
