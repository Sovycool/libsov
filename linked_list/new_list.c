/*
** EPITECH PROJECT, 2023
** organized
** File description:
** new_list
*/

#include "linked_list.h"
#include <stdlib.h>

linked_list_t *new_list(void)
{
    linked_list_t *list = malloc(sizeof(linked_list_t));

    list->previous = NULL;
    list->data = NULL;
    list->next = NULL;
    return list;
}