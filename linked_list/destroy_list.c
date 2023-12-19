/*
** EPITECH PROJECT, 2023
** linked_list
** File description:
** destroy_list
*/

#include "linked_list.h"
#include <stdlib.h>

void destroy_list(linked_list_t *list)
{
    if (list->data != NULL)
        destroy_list(list->next);
    free(list);
}
