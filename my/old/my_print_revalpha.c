/*
** EPITECH PROJECT, 2023
** my_print_revalpha
** File description:
** Prints all letters in descending order on one line
*/

#include "my.h"

void my_print_revalpha(void)
{
    int i = 25;

    while (i >= 0) {
        my_putchar(97 + i);
        i--;
    }
}
