/*
** EPITECH PROJECT, 2023
** organized
** File description:
** remove_from_list
*/

#include "linked_list.h"
#include <stdlib.h>

void remove_from_list(linked_list_t *list)
{
    linked_list_t **item = &list;

    while ((*item)->next != NULL) {
        (*item)->data = (*item)->next->data;
        item = &(*item)->next;
    }
    if ((*item)->previous != NULL) {
        (*item)->previous->next = NULL;
        free(*item);
    }
}
