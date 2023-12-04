/*
** EPITECH PROJECT, 2023
** my_revstr.c
** File description:
** Reverse a string str
*/

#include "my.h"

char *my_revstr(char *str)
{
    int len = my_strlen(str);
    int mid = (len % 2) + (len / 2);
    char temp;

    for (int i = 0; i <= mid; i++) {
        temp = str[i];
        str[i] = str[len - i];
        str[len - i - 1] = temp;
    }
    return str;
}
