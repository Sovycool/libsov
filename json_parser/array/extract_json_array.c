/*
** EPITECH PROJECT, 2023
** json_parser
** File description:
** extract_json_array
*/

#include "../json_parser.h"
#include "../../my/my.h"
#include <stdlib.h>

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
            add_to_list(list, (void *)value, -1);
        }
    }
    free(str);
    return list;
}
