/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_revstr
*/

#include "my.h"
#include <stdlib.h>

char *my_revstr(char const *str)
{
    int len = my_strlen(str);
    char *output = malloc(sizeof(char) * len);

    for (int i = 0; str[i] != 0; i++)
        output[i] = str[len - i - 1];
    return output;
}
