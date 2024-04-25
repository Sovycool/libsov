/*
** EPITECH PROJECT, 2024
** Libsov
** File description:
** get_json_string
*/

#include "../jpar.h"
#include "../../my/my.h"

char *get_json_string(char **file)
{
    int count = 0;
    char *output = NULL;

    (*file)++;
    for (; (*file)[count]; count++) {
        if ((*file)[count] == '\\') {
            count++;
            continue;
        }
        if ((*file)[count] == '\"')
            break;
    }
    output = my_strndup((*file), count);
    (*file) += count + 1;
    return output;
}
