/*
** EPITECH PROJECT, 2024
** Libsov
** File description:
** json_finder
*/

#include "../jpar.h"
#include "../../my/my.h"

static json_object_t *json_find_object(json_object_t *object, char *value_name)
{
    for (; object; object = object->next)
        if (my_strcmp(object->value_name, value_name) == 0)
            return object;
    return NULL;
}

json_object_t *json_finder(json_object_t *json, char *filepath)
{
    char **path = NULL;
    json_object_t *output;

    if (!json || !filepath)
        return NULL;
    path = my_str_to_word_array(filepath, "/");
    if (my_arrlen((void **)path) == 1) {
        output = json_find_object(json, path[0]);
        my_free_word_array(path);
        return output;
    }
    output = json_finder(
        json_find_object(json, path[0]), filepath + my_strlen(path[0]));
    my_free_word_array(path);
    return output;
}
