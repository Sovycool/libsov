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
    json_object_t *json = extract_json(fman_get_file("test.json"));

    printf("> %s\n", (((json_value_t *)((linked_list_t *)get_json_value(get_json_value(json, "resources"), "textures"))->data))->value);
    display_json(json);
}
