/*
** EPITECH PROJECT, 2024
** Libsov
** File description:
** get_json_object
*/

#include "../jpar.h"

json_object_t *get_json_object(char **file)
{
    json_object_t *object = new_json_object();

    (*file)++;
    object->value_name = get_json_string(file);
    (*file)++;
    get_json_value(file, &object->value, &object->type);
    if ((*file)[0] == ',')
        object->next = get_json_object(file);
    (*file)++;
    return object;
}
