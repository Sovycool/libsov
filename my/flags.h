/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** Flags constants
*/

#include "flag_funcs.h"

#ifndef FLAGS_CONSTANTS_
    #define FLAGS_CONSTANTS_

const char flags[] = {
    'c',
    'd',
    'i',
    'e',
    'E',
    'f',
    'g',
    'G',
    'o',
    's',
    'u',
    'x',
    'X',
    'p',
    'n',
    '%'
};
typedef int (*func_arr)();
func_arr flag_funcs[] = {
    my_flag_putchar,    //c
    my_flag_putnbr,     //d
    my_flag_putnbr,     //i
    my_sci_nota_low,    //e
    my_sci_nota_up,     //E
    my_putfloat,        //f
    my_short_low,       //g
    my_short_up,        //G
    my_octal,           //o
    my_flag_putstr,     //s
    my_u_int,           //u
    my_hexa_low,        //x
    my_hexa_up,         //X
    my_pointer,         //p
    my_none,            //n
    my_percent          //%
};

#endif /* !FLAGS */
