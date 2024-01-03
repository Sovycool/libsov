/*
** EPITECH PROJECT, 2023
** json_parser
** File description:
** jpar
*/

#ifndef JPAR_H_
    #define JPAR_H_

    #include "json_headers/json_parser.h"

json_object_t *new_json(void);
void destroy_json(json_object_t *json);
void display_json(json_object_t *json);
json_object_t *extract_json(char *str);
/*!
** @brief Add a new pair key/value to a json object.
** If key already exists and is of ARRAY type, adds value to ARRAY.
** Else, fails if key already exists in object.
** @param json Pointer to json object.
** @param key key of the key/value pair.
** @param value Pointer to value.
** @param type Type of value.
** @return Returns 1 on sucess, 0 on fail.
*/
int add_to_json(
    json_object_t *json, char *key, void *value, json_value_type_t type);
/*!
** @brief Find a json value associated to a given key.
** Fails if key is not found.
** @param json Pointer to json object.
** @param key Key to find.
** @return Returns `void *` pointing on value on sucess, NULL on fail.
*/
void *get_json_value(json_object_t *json, char *key);

#endif /* !JPAR_H_ */
