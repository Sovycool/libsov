/*
** EPITECH PROJECT, 2024
** Libsov
** File description:
** json_parser
*/

#include "../jpar.h"
#include "../../file_manipulation/fman.h"

static char *get_json_file(char *filepath)
{
    char *file = fman_get_file(filepath);
    char *cleaned = NULL;

    if (!file)
        return NULL;
    cleaned = string_cleaner(file);
    free(file);
    return cleaned;
}

json_object_t *json_parser(char *filepath)
{
    char *file = get_json_file(filepath);
    char *tmp = file;
    json_object_t *json = NULL;

    if (!file)
        return NULL;
    if (json_checker(file))
        return NULL;
    json = get_json_object(&file);
    free(tmp);
    return json;
}
