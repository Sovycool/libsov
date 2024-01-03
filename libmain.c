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
    linked_dict_t *link = dict;

    set_in_dict(dict, "0", "Hello");
    set_in_dict(dict, "1", "Hello");
    remove_from_dict(dict, "0");
    remove_from_dict(dict, "1");
    for (NULL; link->key; link = link->next) {
        my_printf("Key = %s, Value = %s\n", link->key, link->data);
    }
    my_printf("%d\n", dict_len(dict));
    destroy_dict(dict);
    return 0;
}
