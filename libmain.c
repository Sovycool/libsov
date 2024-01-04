/*
** EPITECH PROJECT, 2023
** libsov
** File description:
** libmain
*/

#include "my/my.h"
#include "linked_list/ll.h"
#include "json_parser/jpar.h"
#include "file_manipulation/fman.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

int main(void)
{
    linked_dict_t *dict = new_dict();

    set_in_dict(dict, "0", "Hello");
    set_in_dict(dict, "1", "Hi");
    set_in_dict(dict, "2", "Bye");
    set_in_dict(dict, "3", "Ciao");
    my_printf("%s\n", get_in_dict(dict, "1"));
    my_printf("%s\n", get_in_dict(dict, "3"));
}
