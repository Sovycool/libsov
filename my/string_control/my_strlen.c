/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_strlen
*/

int my_strlen(char const *str)
{
    if (!str)
        return -1;
    return (str[0] == 0 ? 0 : 1 + my_strlen(str + 1));
}
