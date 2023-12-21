/*
** EPITECH PROJECT, 2023
** json_parser
** File description:
** json_parser
*/

#ifndef JSON_PARSER_H_
    #define JSON_PARSER_H_

    #include "json_headers/json_types.h"
    #include "json_headers/json_object.h"
    #include "json_headers/json_pair.h"
    #include "json_headers/json_value.h"
    #include "json_headers/json_array.h"

json_object_t *new_json(void);
void destroy_json(json_object_t *json);
void display_json(json_object_t *json);

#endif /* !JSON_PARSER_H_ */
