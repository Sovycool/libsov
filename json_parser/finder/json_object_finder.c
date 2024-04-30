/*
** EPITECH PROJECT, 2024
** Libsov
** File description:
** json_object_finder
*/

#include "../jpar.h"

json_object_t *json_object_finder(json_object_t *json, char *filepath)
{
    json_object_t *object = json_finder(json, filepath);

    if (!object || object->type != JSON_OBJECT)
        return NULL;
    return object->value->json_object;
}
