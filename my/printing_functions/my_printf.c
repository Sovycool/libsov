/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_printf
*/

#include "../my.h"
#include "my_printf.h"
#include <stdlib.h>
#include <stdarg.h>

static flag_t *reset_flag(flag_t *flag)
{
    flag_t *new_flag = malloc(sizeof(flag_t));

    if (flag != NULL)
        free(flag);
    new_flag->precision = NULL;
    new_flag->specifier = 0;
    return new_flag;
}

static flag_t *process_flag(char *str, int *idx, flag_t *flag)
{
    void *data;

    *idx += 1;
    if (str[*idx] == '.') {
        flag->precision = malloc(sizeof(int));
        *flag->precision = my_atoi(str + *idx);
        return process_flag(str, idx, flag);
    }
    if (my_is_char_in_str(str[*idx], "cdsf%") != -1) {
        flag->specifier = str[*idx];
        return flag;
    }
    return process_flag(str, idx, flag);
}

static int print_flag(flag_t *flag, va_list args)
{
    switch (flag->specifier) {
        case 'c':
            return my_putchar(va_arg(args, int));
        case 'd':
            return my_putint(va_arg(args, int));
        case 's':
            return my_putstr(va_arg(args, char *));
        case 'f':
            if (flag->precision == NULL)
                return my_putfloat(va_arg(args, double), 6);
            return my_putfloat(va_arg(args, double), *flag->precision);
        default:
            break;
    }
}

int my_printf(char *str, ...)
{
    int count = 0;
    va_list args;
    flag_t *flag = NULL;

    va_start(args, str);
    for (int i = 0; str[i]; i++) {
        if (str[i] == '%') {
            flag = reset_flag(flag);
            flag = process_flag(str, &i, flag);
            count += print_flag(flag, args);
        } else
            count += my_putchar(str[i]);
    }
    free(flag);
    return count;
}
