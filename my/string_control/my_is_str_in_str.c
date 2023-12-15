/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_is_str_in_str
*/

#include "../my.h"

int my_is_str_in_str(char const *sequence, char const *str)
{
    int index = my_is_char_in_str(sequence[0], str);

    if (index == -1)
        return -1;
    for (int i = 0; sequence[i]; i++) {
        if (str[index + i] == 0)
            return -1;
        if (sequence[i] != str[index + i])
            return my_is_str_in_str(sequence, str + (index + i));
    }
    return index;
}
