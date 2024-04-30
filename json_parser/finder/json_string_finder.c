/*
** EPITECH PROJECT, 2024
** Libsov
** File description:
** json_string_finder
*/

#include "../jpar.h"

char *json_string_finder(json_object_t *json, char *filepath)
{
    json_object_t *object = json_finder(json, filepath);

    if (!object || object->type != JSON_STR)
        return 0;
    return object->value->json_string;
}
