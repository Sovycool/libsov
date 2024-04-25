/*
** EPITECH PROJECT, 2024
** Libsov
** File description:
** parser
*/

#ifndef JSON_PARSER_H_
    #define JSON_PARSER_H_

    #include "../jpar.h"

json_object_t *new_json_object(void);
json_array_t *new_json_array(void);
json_object_t *json_parser(char *filepath);
void get_json_value(
    char **file, json_value_t **value, json_value_type_t *type);
json_object_t *get_json_object(char **file);
char *get_json_string(char **file);
json_array_t *get_json_array(char **file);

#endif /* !JSON_PARSER_H_ */
