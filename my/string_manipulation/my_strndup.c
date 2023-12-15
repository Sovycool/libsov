/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_strndup
*/

#include "../my.h"
#include <stdlib.h>

char *my_strndup(char const *src, int n)
{
    int i = 0;
    char *str;
    int output_len = my_strlen(src);

    output_len = (output_len < n ? output_len : n);
    str = malloc(sizeof(char) * (output_len + 1));
    while (i < output_len) {
        str[i] = src[i];
        i++;
    }
    str[i] = 0;
    return str;
}
