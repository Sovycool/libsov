/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_are_chars_in_str
*/

#include "../my.h"

int my_are_chars_in_str(char const *chars, char const *str)
{
    int index;
    int output = -1;

    for (int i = 0; chars[i]; i++) {
        index = my_is_char_in_str(chars[i], str);
        if (index != -1)
            output = (index < output || output == -1 ? index : output);
    }
    return output;
}
