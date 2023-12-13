/*
** EPITECH PROJECT, 2023
** my_print_digits
** File description:
** Prints all digits in ascending order on a single line
*/

#include "my.h"

void my_print_digits(void)
{
    int i = 0;

    while (i < 10) {
        my_putchar(48 + i);
        i++;
    }
}
