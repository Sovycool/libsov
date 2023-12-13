/*
** EPITECH PROJECT, 2023
** my_print_alpha
** File description:
** Prints all letters in ascending order on one line
*/

#include "my.h"

void my_print_alpha(void)
{
    int i = 0;

    while (i < 26) {
        my_putchar(97 + i);
        i++;
    }
}
