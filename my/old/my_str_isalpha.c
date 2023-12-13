/*
** EPITECH PROJECT, 2023
** my_str_isalpha
** File description:
** Returns 1 if only letters in str, 0 if not
*/

int my_str_isalpha(char const *str)
{
    for (int i = 0; str[i] != 0; i++)
        if (str[i] < 'a' || str[i] > 'z' && str[i] < 'A' || str[i] > 'Z')
            return 0;
    return 1;
}
