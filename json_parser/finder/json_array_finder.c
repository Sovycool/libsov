/*
** EPITECH PROJECT, 2024
** Libsov
** File description:
** json_array_finder
*/

#include "../jpar.h"

json_array_t *json_array_finder(json_object_t *json, char *filepath)
{
    json_object_t *object = json_finder(json, filepath);

    if (!object || object->type != JSON_ARRAY)
        return 0;
    return object->value->json_array;
}
