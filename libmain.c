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

int main(void)
{
    json_object_t *json = new_json();

    add_to_json(json, "name", "Sovann", STRING);
    display_json(json);
    add_to_json(json, "wife", "Alex", STRING);
    display_json(json);
    add_to_json(json, "age", (void *)18, INT);
    display_json(json);
    destroy_json(json);
    return 0;
}
