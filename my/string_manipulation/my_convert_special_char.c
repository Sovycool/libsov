/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_convert_special_char
*/

#include "../my.h"
#include <stdlib.h>

char get_special_char(char c)
{
    switch (c) {
        case '0' :
            return '\0';
        case 'a' :
            return '\a';
        case 'b' :
            return '\b';
        case 't' :
            return '\t';
        case 'n' :
            return '\n';
        case 'v' :
            return '\v';
        case 'f' :
            return '\f';
        case 'r' :
            return '\r';
        default:
            return c;
    }
}

char *my_convert_special_char(char *str)
{
    char *dup = my_strdup(str);
    char *tail;
    char *output;
    int i = 0;

    while (str[i] && str[i] != '\\') {
        i++;
    }
    if (str[i] == '\\') {
        dup[i] = get_special_char(str[i + 1]);
        tail = my_convert_special_char(str + i + 1);
        output = my_strncat(dup, tail, i, -1);
        free(dup);
        free(tail);
        return output;
    }
    return dup;
}
