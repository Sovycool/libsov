/*
** EPITECH PROJECT, 2023
** linked_list
** File description:
** set_in_dict
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

static int len(char const *str)
{
    int i = 0;

    while (str[i])
        i++;
    return i;
}

static char *dup(char const *src)
{
    int i = 0;
    char *str;

    str = malloc(sizeof(char) * (len(src) + 1));
    while (src[i] != 0) {
        str[i] = src[i];
        i++;
    }
    str[i] = 0;
    return str;
}

static void push_data(linked_dict_t *dict)
{
    if (dict->next) {
        push_data(dict->next);
        dict->next->key = dict->key;
        dict->next->data = dict->data;
    } else {
        dict->next = new_dict();
        dict->next->key = dict->key;
        dict->next->data = dict->data;
    }
}

int set_in_dict(linked_dict_t *dict, char *key, void *data)
{
    for (linked_dict_t *link = dict; link->key; link = link->next)
        if (cmp(link->key, key) == 0) {
            link->data = data;
            return 1;
        }
    push_data(dict);
    dict->key = dup(key);
    dict->data = data;
    return 1;
}
