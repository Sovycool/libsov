/*
** EPITECH PROJECT, 2023
** libsov
** File description:
** libmain
*/

#include "my/my.h"
#include "linked_list/linked_list.h"
#include "json_parser/json_parser.h"
#include <stdio.h>

int main(void)
{
    my_putstr(my_int_to_base(25, 8));
    printf("\n%d\n", my_base_to_int("31", 8));
    return 0;
}

