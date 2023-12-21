/*
** EPITECH PROJECT, 2023
** json_parser
** File description:
** extract_json
*/

#include "../json_parser.h"
#include "../../my/my.h"

char **parse_str(char *str)
{
    char **array = my_str_to_word_array(str, " \n");

    my_show_word_array(array, "\n");
}

json_object_t *extract_json(char *str)
{
    json_object_t *json = new_json();
    char **array = parse_str(str);
}
