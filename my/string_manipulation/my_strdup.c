/*
** EPITECH PROJECT, 2023
** LibSov
** File description:
** my_strdup
*/

#include "../my.h"

char *my_strdup(char const *src)
{
    int i = 0;
    char *str;

    if (!src)
        return NULL;
    str = malloc(sizeof(char) * (my_strlen(src) + 1));
    while (src[i] != 0) {
        str[i] = src[i];
        i++;
    }
    str[i] = 0;
    return str;
}
