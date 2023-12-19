/*
** EPITECH PROJECT, 2023
** linked_list
** File description:
** add_to_list
*/

#include "linked_list.h"
#include <stdlib.h>

void add_to_list(linked_list_t *list, void *data)
{
    linked_list_t **link = &list;

    while ((*link)->data != NULL)
        link = &(*link)->next;
    (*link)->data = data;
    (*link)->next = new_list();
    (*link)->next->previous = (*link);
}
