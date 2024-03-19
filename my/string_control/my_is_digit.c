/*
** EPITECH PROJECT, 2023
** LibSov
** File description:
** my_is_digit
*/

#include "../my.h"

int my_is_digit(char c)
{
    if (my_is_char_in_str(c, "0123456789") != -1)
        return 1;
    return 0;
}
