/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** %s
*/

#include "../my.h"

int my_flag_putstr(char *str)
{
    my_putstr(str);
    return my_strlen(str);
}
