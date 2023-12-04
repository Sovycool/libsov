/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** %n
*/

#include <stdarg.h>
#include <unistd.h>

int my_none(void *ptr)
{
    ptr = ptr;
    write(1, "%n", 2);
    return 2;
}
