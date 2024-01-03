/*
** EPITECH PROJECT, 2023
** linked_list
** File description:
** new_list
*/

#include "../ll.h"
#include <stdlib.h>

linked_list_t *new_list(void)
{
    linked_list_t *list = malloc(sizeof(linked_list_t));

    list->previous = NULL;
    list->data = NULL;
    list->next = NULL;
    return list;
}
