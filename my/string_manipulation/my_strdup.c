/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_strdup
*/

#include "../my.h"
#include <stdlib.h>

char *my_strdup(char const *src)
{
    int i = 0;
    char *str;

    str = malloc(sizeof(char) * (my_strlen(src) + 1));
    while (src[i] != 0) {
        str[i] = src[i];
        i++;
    }
    str[i] = 0;
    return str;
}
