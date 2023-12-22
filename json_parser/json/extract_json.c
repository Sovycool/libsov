/*
** EPITECH PROJECT, 2023
** json_parser
** File description:
** extract_json
*/

#include "../json_parser.h"
#include "../../my/my.h"
#include <stdlib.h>

json_object_t *extract_json(char *str)
{
    json_object_t *json;
    char *main_json;
    int i = 0;

    while (str[i] != '{' && str[i])
        i++;
    if (str[i] == '{') {
        json = extract_json_object(str + i);
    }
    return json;
}
