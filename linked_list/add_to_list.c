/*
** EPITECH PROJECT, 2023
** organized
** File description:
** add_to_list
*/

#include "linked_list.h"
#include <stdlib.h>

static void push_data(linked_list_t *list)
{
    if (list->next != NULL) {
        push_data(list->next);
        list->next->data = list->data;
    } else {
        list->next = new_list();
        list->next->previous = list;
        list->next->data = list->data;
    }
}

void add_to_list(linked_list_t *list, void *data)
{
    push_data(list);
    list->data = data;
}
