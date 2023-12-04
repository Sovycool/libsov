/*
** EPITECH PROJECT, 2023
** my_strlen
** File description:
** Returns length of an str
*/

int my_strlen(const char *str)
{
    int i = 0;

    while (str[i] != 0)
        i++;
    return i;
}
