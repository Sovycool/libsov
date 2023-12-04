/*
** EPITECH PROJECT, 2023
** my_evil_str
** File description:
** Swaps characters of a str two by two (first <--> last)
*/

#include "my.h"

static void swap_char(char *a, char *b)
{
    char temp = *a;

    *a = *b;
    *b = temp;
}

char *my_evil_str(char *str)
{
    int len = my_strlen(str);
    int first_char_pos = 0;
    int last_char_pos = len - 1;
    int mid_point = len / 2;

    while (first_char_pos <= mid_point) {
        swap_char(str + first_char_pos, str + last_char_pos);
        first_char_pos++;
        last_char_pos--;
    }
    return (str);
}
