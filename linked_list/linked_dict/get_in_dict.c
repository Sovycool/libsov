/*
** EPITECH PROJECT, 2024
** linked_list
** File description:
** get_in_dict
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

void *get_in_dict(linked_dict_t *dict, char *key)
{
    if (dict->key == NULL)
        return NULL;
    if (cmp(key, dict->key) == 0)
        return dict->data;
    return get_in_dict(dict->next, key);
}
