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
    json_object_t *me = new_json();
    json_object_t *wife = new_json();
    json_object_t *pet = new_json();
    json_object_t *extra = new_json();
    linked_list_t *list = new_list();
    double flt = 3.14;

    add_to_list(list, new_json_value("Hello world", STRING));
    add_to_list(list, new_json_value(extra, OBJECT));
    add_to_json(extra, "message", "Cheh grosse merde", STRING);
    add_to_json(pet, "name", "Milou", STRING);
    add_to_json(wife, "name", "Alex", STRING);
    add_to_json(wife, "pet", pet, OBJECT);
    add_to_json(me, "name", "Sovann", STRING);
    add_to_json(me, "wife", wife, OBJECT);
    add_to_json(me, "age", (void *)18, INT);
    add_to_json(me, "gpa", &flt, DOUBLE);
    add_to_json(me, "extra", list, ARRAY);
    display_json(me);
    destroy_json(me);
    return 0;
}
