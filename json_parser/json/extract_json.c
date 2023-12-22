/*
** EPITECH PROJECT, 2023
** json_parser
** File description:
** extract_json
*/

#include "../json_parser.h"
#include "../../my/my.h"
#include <stdlib.h>

char *extract_str(char *str)
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

char *extract_json_array_str(char *str)
{
    int opened_brackets = 0;
    int opened_quotes = 0;

    for (int i = 0; str[i]; i++) {
        opened_brackets += my_abs(my_is_char_in_str(str[i], "]][")) - 1;
        if (str[i] == '\"' && opened_quotes == 0) {
            opened_quotes++;
            continue;
        }
        if (str[i] == '\"' && str[i - 1] != '\\')
            opened_quotes--;
        if (str[i] == ']' && opened_brackets == 0 && opened_quotes == 0) {
            return my_strndup(str + 1, i - 1);
        }
        opened_brackets = (opened_brackets < 0 ? 0 : opened_brackets);
    }
    return NULL;
}

linked_list_t *extract_json_array(char *str)
{
    linked_list_t *list = new_list();
    json_value_t *value;

    str = extract_json_array_str(str);
    for (int i = 0; str[i]; i++) {
        if (my_is_char_in_str(str[i], "-0123456789\"{[") != -1) {
            value = extract_json_value(str + i);
            i += extract_json_value_len(str + i);
            add_to_list(list, (void *)value);
        }
    }
    free(str);
    return list;
}

int extract_json_value_len(char *str)
{
    int opened_quotes = 0;
    int opened_curly = 0;
    int opened_brackets = 0;

    for (int i = 0; str[i]; i++) {
        opened_curly += my_abs(my_is_char_in_str(str[i], "}}{")) - 1;
        opened_brackets += my_abs(my_is_char_in_str(str[i], "]][")) - 1;
        if (str[i] == '\"' && opened_quotes == 0) {
            opened_quotes++;
            continue;
        }
        if (str[i] == '\"' && str[i - 1] != '\\')
            opened_quotes--;
        if (my_is_char_in_str(str[i], "]},\n") != -1 && opened_quotes == 0 &&
            opened_curly == 0 && opened_brackets == 0)
            return i;
        opened_curly = (opened_curly < 0 ? 0 : opened_curly);
        opened_brackets = (opened_brackets < 0 ? 0 : opened_brackets);
    }
    return my_strlen(str);
}

double *extract_json_value_number(char *str)
{
    double *output = malloc(sizeof(double));

    *output = my_atof(str);
    return output;
}

int *extract_json_value_bool(char *str)
{
    int *output = malloc(sizeof(int));

    if (my_strncmp(str, "true", 4) == 0)
        *output = 1;
    else if (my_strncmp(str, "false", 5) == 0)
        *output = 0;
    return output;
}

json_value_t *extract_json_value(char *str)
{
    if (str[0] == '\"')
        return new_json_value((void *)extract_str(str), STRING);
    if (my_is_char_in_str(str[0], "-0123456789") != -1)
        return new_json_value((void *)extract_json_value_number(str), NUMBER);
    if (str[0] == '{')
        return new_json_value((void *)extract_json_object(str), OBJECT);
    if (str[0] == '[')
        return new_json_value((void *)extract_json_array(str), ARRAY);
    if (my_strncmp(str, "true", 4) == 0 || my_strncmp(str, "false", 5) == 0)
        return new_json_value((void *)extract_json_value_bool(str), BOOL);
    if (str[0] && my_is_char_in_str(str[0], "]},") == -1)
        return extract_json_value(str + 1);
    return new_json_value(NULL, VOID);
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
            i += my_strlen(key) + 1;
        }
        if (object_content[i] == ':' && key != NULL) {
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
