/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_revstr
*/

#include "../my.h"
#include <stdlib.h>

char *my_revstr(char *str)
{
    int len = my_strlen(str);
    char temp_char;

    for (int i = 0; i < len / 2; i++) {
        temp_char = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp_char;
    }
    return str;
}
