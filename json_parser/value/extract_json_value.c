/*
** EPITECH PROJECT, 2023
** json_parser
** File description:
** extract_json_value
*/

#include "../json_parser.h"
#include "../../my/my.h"
#include <stdlib.h>

static char *extract_str(char *str)
{
    int opened_quotes = 0;

    my_printf("\n%s\n", str);
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

static double *extract_json_value_number(char *str)
{
    double *output = malloc(sizeof(double));

    *output = my_atof(str);
    return output;
}

static int *extract_json_value_bool(char *str)
{
    int *output = malloc(sizeof(int));

    if (my_strncmp(str, "true", 4) == 0)
        *output = 1;
    else if (my_strncmp(str, "false", 5) == 0)
        *output = 0;
    return output;
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

json_value_t *extract_json_value(char *str)
{
    char *str_value;
    char *converted_str;

    if (str[0] == '\"') {
        str_value = extract_str(str);
        converted_str = my_convert_special_char(str_value);
        free(str_value);
        return new_json_value((void *)converted_str, STRING);
    }
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
