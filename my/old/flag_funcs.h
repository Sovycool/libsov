/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** my
*/

#include <stdarg.h>

#ifndef FLAG_FUNCTIONS_
    #define FLAG_FUNCTIONS_

int print_flag(const char *format, int flag_pos, va_list args);
int my_flag_putchar(char c);
int my_flag_putnbr(int nb);
int my_sci_nota_low(double nb);
int my_sci_nota_up(double nb);
int my_putfloat(double nb);
int my_short_low(double nb);
int my_short_up(double nb);
int my_octal(int nb);
int my_flag_putstr(char *str);
int my_u_int(unsigned int nb);
int my_hexa_up(int nb);
int my_hexa_low(int nb);
int my_pointer(void *);
int my_none(void *);
int my_percent(void);

#endif
