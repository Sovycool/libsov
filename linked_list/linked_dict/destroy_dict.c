/*
** EPITECH PROJECT, 2023
** linked_list
** File description:
** destroy_dict
*/

#include "../ll.h"
#include <stdlib.h>

void destroy_dict(linked_dict_t *dict)
{
    if (dict->data != NULL)
        destroy_dict(dict->next);
    free(dict->key);
    free(dict->data);
    free(dict);
}
