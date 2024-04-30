/*
** EPITECH PROJECT, 2024
** Libsov
** File description:
** json_int_finder
*/

#include "../jpar.h"

int json_int_finder(json_object_t *json, char *filepath)
{
    json_object_t *object = json_finder(json, filepath);

    if (!object || object->type != JSON_INT)
        return 0;
    return object->value->json_int;
}
