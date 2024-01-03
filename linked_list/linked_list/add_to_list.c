/*
** EPITECH PROJECT, 2023
** linked_list
** File description:
** add_to_list
*/

#include "../ll.h"
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

void add_to_list(linked_list_t *list, void *data, int index)
{
    linked_list_t *link = list;

    if (index < 0)
        index += list_len(list) + 1;
    for (int i = 0; link->data && i != index; i++)
        link = link->next;
    if (link->data) {
        push_data(link);
        link->data = data;
    } else {
        link->data = data;
        link->next = new_list();
        link->next->previous = link;
    }
}
