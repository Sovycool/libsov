/*
** EPITECH PROJECT, 2023
** libsov
** File description:
** libmain
*/

#include "my/my.h"
#include "linked_list/linked_list.h"
#include "json_parser/json_parser.h"
#include "file_manipulation/file_manipulation.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

int main(void)
{
    char *str = fman_get_file("test.json");

    extract_json(str);
    free(str);
    return 0;
}
