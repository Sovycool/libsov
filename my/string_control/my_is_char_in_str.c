/*
** EPITECH PROJECT, 2023
** LibSov
** File description:
** my_is_char_in_str
*/

int my_is_char_in_str(char c, char const *str)
{
    if (!str)
        return -1;
    for (int i = 0; str[i]; i++)
        if (str[i] == c)
            return i;
    return -1;
}
