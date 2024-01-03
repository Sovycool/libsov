/*
** EPITECH PROJECT, 2023
** linked_list
** File description:
** destroy_list
*/

#include "../ll.h"
#include <stdlib.h>

void destroy_list(linked_list_t *list)
{
    if (list->data)
        destroy_list(list->next);
    free(list);
}
