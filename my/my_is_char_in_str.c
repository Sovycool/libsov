/*
** EPITECH PROJECT, 2023
** my_ls
** File description:
** my_is_char_in_str
*/

int my_is_char_in_str(char c, char const *str)
{
    for (int i = 0; str[i] != 0; i++)
        if (str[i] == c)
            return 1;
    return 0;
}
