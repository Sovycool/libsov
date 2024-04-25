/*
** EPITECH PROJECT, 2024
** Libsov
** File description:
** get_json_value
*/

#include "../jpar.h"
#include "../../my/my.h"

static void get_json_numerical_value(
    char **file, json_value_t **value, json_value_type_t *type)
{
    int i = 0;

    for (; my_is_char_in_str((*file)[i], "0123456789") != -1; i++);
    if ((*file)[i] == '.') {
        *type = JSON_FLOAT;
        (*value)->json_float = my_atof((*file));
        for (; my_is_char_in_str((*file)[0], ".0123456789") != -1; (*file)++);
    } else {
        *type = JSON_INT;
        (*value)->json_int = my_atoi((*file));
        for (; my_is_char_in_str((*file)[0], "0123456789") != -1; (*file)++);
    }
}

void get_json_value(char **file, json_value_t **value, json_value_type_t *type)
{
    if ((*file)[0] == '\"') {
        *type = JSON_STR;
        (*value)->json_string = get_json_string(file);
        return;
    }
    if ((*file)[0] == '{') {
        *type = JSON_OBJECT;
        (*value)->json_object = get_json_object(file);
        return;
    }
    if ((*file)[0] == '[') {
        *type = JSON_ARRAY;
        (*value)->json_array = get_json_array(file);
        return;
    }
    get_json_numerical_value(file, value, type);
}
