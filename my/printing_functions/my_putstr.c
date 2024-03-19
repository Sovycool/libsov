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

    for (int i = 0; str[i]; i++)
        count += my_putchar(str[i]);
    return count;
    return (str[0] == 0 ? 0 : my_putchar(str[0]) + my_putstr(str + 1));
}
