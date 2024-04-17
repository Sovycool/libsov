/*
** EPITECH PROJECT, 2023
** LibSov
** File description:
** my_putstr
*/

#include "../my.h"

int my_putstr(char const *str)
{
    int count = 0;

    if (!str) {
        my_putstr("(NULL)");
        return 0;
    }
    for (int i = 0; str[i]; i++)
        count += my_putchar(str[i]);
    return count;
}
