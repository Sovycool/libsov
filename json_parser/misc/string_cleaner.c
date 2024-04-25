/*
** EPITECH PROJECT, 2024
** Libsov
** File description:
** string_cleaner
*/

#include "../jpar.h"
#include "../../my/my.h"

static int is_end(char *str)
{
    for (int i = 0; str[i]; i++) {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
            return 0;
    }
    return 1;
}

static int count_valid_chars(char *str)
{
    int count = 0;
    int is_string = 0;

    for (int i = 0; str[i]; i++) {
        if (str[i] == '\"' && str[i - 1] != '\\')
            is_string = !is_string;
        if (is_end(str + i))
            break;
        if (str[i] == '\n' || (!is_string && (str[i] == ' ' || str[i] == '\t')
            && (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1])))
            continue;
        count++;
    }
    return count;
}

char *string_cleaner(char *str)
{
    char *clean_str = 0;
    int clean_str_index = 0;
    int is_string = 0;

    if (!str)
        return NULL;
    clean_str = malloc(sizeof(char) * (count_valid_chars(str) + 1));
    for (int i = 0; str[i]; i++) {
        if (str[i] == '\"' && str[i - 1] != '\\')
            is_string = !is_string;
        if (is_end(str + i))
            break;
        if (str[i] == '\n' || (!is_string && (str[i] == ' ' || str[i] == '\t')
            && (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1])))
            continue;
        clean_str[clean_str_index] = str[i];
        clean_str_index++;
    }
    clean_str[clean_str_index] = 0;
    return clean_str;
}
