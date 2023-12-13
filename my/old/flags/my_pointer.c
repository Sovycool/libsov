/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** %p
*/

#include "../my.h"
#include "../flag_funcs.h"

int my_pointer(void *ptr)
{
    int count = 2;
    int address = *(int *)ptr;

    my_putstr("0x");
    count += my_hexa_low(address);
    return count;
}
