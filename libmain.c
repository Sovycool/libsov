/*
** EPITECH PROJECT, 2023
** libsov
** File description:
** libmain
*/

#include "my/my.h"
#include "linked_list/linked_list.h"
#include "json_parser/jpar.h"
#include "file_manipulation/fman.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

int main(void)
{
    int nb = fman_display_file("test.json");

    return 0;
}
