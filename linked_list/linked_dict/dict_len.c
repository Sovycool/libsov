/*
** EPITECH PROJECT, 2023
** linked_list
** File description:
** dict_len
*/

#include "../ll.h"
#include <stdlib.h>

int dict_len(linked_dict_t *dict)
{
    if (dict->key == NULL)
        return 0;
    return 1 + dict_len(dict->next);
}
