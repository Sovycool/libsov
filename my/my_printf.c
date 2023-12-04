/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** main
*/

#include "flag_funcs.h"
#include <stdarg.h>
#include <unistd.h>

static void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_printf(const char *format, ...)
{
    va_list args;
    int count = 0;

    va_start(args, format);
    for (int i = 0; format[i] != 0; i += 1) {
        if (format[i] == '%') {
            count += print_flag(format, i + 1, args);
            i += 1;
        } else {
            my_putchar(format[i]);
            count += 1;
        }
    }
    va_end(args);
    return (count);
}
