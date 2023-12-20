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
#include <stdlib.h>
#include <sys/stat.h>

int main(void)
{
    char str[] = "Hello world";
    char **arr = my_str_to_word_array(str, " ");
    char *new_str = my_word_array_to_str(arr, ", ");

    my_show_word_array(arr, "\n");
    my_printf("%s\n", new_str);
    my_free_word_array(arr);
    free(new_str);
    return 0;
}
