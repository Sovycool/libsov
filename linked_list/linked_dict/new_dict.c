/*
** EPITECH PROJECT, 2023
** linked_list
** File description:
** new_dict
*/

#include "../ll.h"
#include <stdlib.h>

linked_dict_t *new_dict(void)
{
    linked_dict_t *dict = malloc(sizeof(linked_dict_t));

    dict->key = NULL;
    dict->data = NULL;
    dict->next = NULL;
    return dict;
}
