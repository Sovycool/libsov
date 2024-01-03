/*
** EPITECH PROJECT, 2023
** linked_list
** File description:
** remove_from_list
*/

#include "../ll.h"
#include <stdlib.h>

void remove_from_list(linked_list_t *list)
{
    linked_list_t *item = list;

    while (item->next != NULL) {
        item->data = item->next->data;
        item = item->next;
    }
    if (item->previous != NULL) {
        item->previous->next = NULL;
        free(item);
    }
}
