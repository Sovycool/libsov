/*
** EPITECH PROJECT, 2023
** my_putstr
** File description:
** Displays all characters of a string one by one given the
** adress of the first character
*/

#include "my.h"

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
}
