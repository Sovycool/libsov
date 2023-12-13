/*
** EPITECH PROJECT, 2023
** my_strdup
** File description:
** Duplicates a string in a newly allocated string
*/

#include "my.h"
#include <stdlib.h>

char *my_strndup(char const *src, int n)
{
    int i = 0;
    char *str;
    int srclen;

    srclen = my_strlen(src) + 1;
    str = malloc(srclen + 1);
    while (i < srclen && i < n) {
        str[i] = src[i];
        i++;
    }
    str[i] = 0;
    return str;
}
