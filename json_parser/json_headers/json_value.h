/*
** EPITECH PROJECT, 2023
** json_parser
** File description:
** json_value
*/

#ifndef JSON_VALUE_H_
    #define JSON_VALUE_H_

    #include "json_types.h"

json_value_t *new_json_value(void *value, json_value_type_t type);
void destroy_json_value(json_value_t *value);
void display_json_value(json_value_t *value, int tab);
json_value_t *extract_json_value(char *str);
int extract_json_value_len(char *str);

#endif /* !JSON_VALUE_H_ */
