/*
** EPITECH PROJECT, 2023
** linked_list
** File description:
** get_list_index
*/

#include "linked_list.h"
#include <stdlib.h>

linked_list_t *get_list_at_index(linked_list_t *list, int index)
{
    if (index == 0 || list->data == NULL)
        return list;
    return get_list_at_index(list->next, index - 1);
}
