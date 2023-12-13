/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** Prints results depending on flags
*/

#include "../flags.h"
#include <stdarg.h>
#include <stdlib.h>

int print_flag(const char *format, int flag_pos, va_list list)
{
    for (int i = 0; flags[i] != 0; i++)
        if (format[flag_pos] == flags[i]) {
            return flag_funcs[i](va_arg(list, void *));
        }
    return 0;
}
