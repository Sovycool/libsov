/*
** EPITECH PROJECT, 2023
** organized
** File description:
** list_len
*/

#include "linked_list.h"
#include <stdlib.h>

int list_len(linked_list_t *list)
{
    if (list->data == NULL)
        return 0;
    return 1 + list_len(list->next);
}
