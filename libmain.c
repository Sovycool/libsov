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
    my_printf("%f\n", my_atof("1.25"));
    display_json(extract_json(fman_get_file("test.json")));
}
