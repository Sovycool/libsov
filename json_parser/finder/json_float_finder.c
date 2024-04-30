/*
** EPITECH PROJECT, 2024
** Libsov
** File description:
** json_float_finder
*/

#include "../jpar.h"

double json_float_finder(json_object_t *json, char *filepath)
{
    json_object_t *object = json_finder(json, filepath);

    if (!object || object->type != JSON_FLOAT)
        return 0;
    return object->value->json_float;
}
