/*
** EPITECH PROJECT, 2024
** Libsov
** File description:
** get_json_array
*/

#include "../jpar.h"

json_array_t *get_json_array(char **file)
{
    json_array_t *array = new_json_array();

    (*file)++;
    get_json_value(file, &array->value, &array->type);
    if ((*file)[0] == ',')
        array->next = get_json_array(file);
    else
        (*file)++;
    return array;
}
