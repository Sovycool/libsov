/*
** EPITECH PROJECT, 2023
** linked_list
** File description:
** list_to_array
*/

#include "linked_list.h"
#include <stdlib.h>

void **list_to_array(linked_list_t *list)
{
    int len = list_len(list);
    void **array = malloc(sizeof(void *) * (len + 1));
    linked_list_t **item = &list;

    for (int i = 0; i < len; i++) {
        array[i] = (*item)->data;
        item = &(*item)->next;
    }
    array[len] = NULL;
    return array;
}
