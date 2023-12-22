/*
** EPITECH PROJECT, 2023
** json_parser
** File description:
** json_array
*/

#ifndef JSON_ARRAY_H_
    #define JSON_ARRAY_H_

    #include "json_types.h"

void destroy_json_array(linked_list_t *list);
void display_json_array(linked_list_t *array, int tab);
linked_list_t *extract_json_array(char *str);
char *extract_json_array_str(char *str);

#endif /* !JSON_ARRAY_H_ */
