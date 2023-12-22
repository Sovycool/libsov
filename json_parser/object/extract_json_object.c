/*
** EPITECH PROJECT, 2023
** json_parser
** File description:
** extract_json_object
*/

#include "../json_parser.h"
#include "../../my/my.h"
#include <stdlib.h>

static char *extract_str(char *str)
{
    int opened_quotes = 0;

    for (int i = 0; str[i]; i++) {
        if (str[i] == '\"' && opened_quotes == 0) {
            opened_quotes++;
            continue;
        }
        if (str[i] == '\"' && str[i - 1] != '\\')
            opened_quotes--;
        if (str[i] == '\"' && opened_quotes == 0)
            return my_strndup(str + 1, i - 1);
    }
    return NULL;
}

char *extract_json_object_str(char *str)
{
    int opened_curly = 0;
    int opened_quotes = 0;

    for (int i = 0; str[i]; i++) {
        opened_curly += my_abs(my_is_char_in_str(str[i], "}}{")) - 1;
        if (str[i] == '\"' && opened_quotes == 0) {
            opened_quotes++;
            continue;
        }
        if (str[i] == '\"' && str[i - 1] != '\\')
            opened_quotes--;
        if (str[i] == '}' && opened_curly == 0 && opened_quotes == 0)
            return my_strndup(str + 1, i - 1);
        opened_curly = (opened_curly < 0 ? 0 : opened_curly);
    }
    return NULL;
}

json_object_t *extract_json_object(char *str)
{
    json_object_t *json = new_json();
    char *key = NULL;
    json_value_t *value;
    char *object_content = extract_json_object_str(str);

    for (int i = 0; object_content[i]; i++) {
        if (object_content[i] == '\"' && key == NULL) {
            key = extract_str(object_content + i);
            i += my_strlen(key) + 3;
            value = extract_json_value(object_content + i);
            i += extract_json_value_len(object_content + i - 1) - 1;
            add_to_json(json, key, value->value.void_, value->type);
            free(value);
            free(key);
            key = NULL;
        }
    }
    free(object_content);
    return json;
}
