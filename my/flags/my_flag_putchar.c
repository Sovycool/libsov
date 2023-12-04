/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** %c
*/

#include <unistd.h>

int my_flag_putchar(char c)
{
    write(1, &c, 1);
    return 1;
}
