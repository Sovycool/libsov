/*
** EPITECH PROJECT, 2023
** json_parser
** File description:
** json_object
*/

#ifndef JSON_OBJECT_H_
    #define JSON_OBJECT_H_

    #include "json_types.h"

json_object_t *new_json_object(void);
void destroy_json_object(json_object_t *object);
void display_json_object(json_object_t *object, int tab);
json_object_t *extract_json_object(char *str);
char *extract_json_object_str(char *str);

#endif /* !JSON_OBJECT_H_ */
