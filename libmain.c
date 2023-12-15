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
    char i[] = "Hello world!";
    char j[] = "Hello planet!";

    printf("%d\n", my_strcmp(i, j));
    return 0;
}
