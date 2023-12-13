/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_putstr
*/

#include "my.h"

int my_putstr(char const *str)
{
    return (str[0] == 0 ? 0 : my_putchar(str[0]) + my_putstr(str + 1));
}
