/*
** EPITECH PROJECT, 2023
** LibSov
** File description:
** my_strndup
*/

#include "../my.h"

char *my_strndup(char const *src, int n)
{
    int i = 0;
    char *str;
    int output_len = my_strlen(src);

    if (!src)
        return NULL;
    output_len = (output_len < n ? output_len : n);
    str = malloc(sizeof(char) * (output_len + 1));
    while (i < output_len) {
        str[i] = src[i];
        i++;
    }
    str[i] = 0;
    return str;
}
