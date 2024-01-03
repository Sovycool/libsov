/*
** EPITECH PROJECT, 2023
** linked_list
** File description:
** remove_from_dict
*/

#include "../ll.h"
#include <stdlib.h>

static int cmp(char const *s1, char const *s2)
{
    int i = 0;

    while (s1[i] == s2[i] && s1[i] != 0 && s2[i] != 0)
        i++;
    return (s1[i] - s2[i]);
}

void remove_from_dict(linked_dict_t *dict, char *key)
{
    linked_dict_t *item = dict;

    for (NULL; cmp(item->key, key) && item->key; item = item->next);
    free(item->key);
    for (NULL; item->key; item = item->next) {
        item->key = item->next->key;
        item->data = item->next->data;
    }
    free(item);
}
