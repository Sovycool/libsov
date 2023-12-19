/*
** EPITECH PROJECT, 2023
** json_parser
** File description:
** json_value
*/

#ifndef JSON_VALUE_H_
    #define JSON_VALUE_H_

    #include "json_types.h"
/*!
** @brief Creates a new json value structure.
** @param value Pointer to value.
** @param type Type of value.
** @return Returns json value.
*/
json_value_t *new_json_value(void *value, json_value_type_t type);

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
** @brief Find a json_value associated to a given key.
** Fails if key is not found.
** @param json Pointer to json object.
** @param key Key to find.
** @return Returns value on sucess, NULL on fail.
*/
json_value_t *get_json_value(json_object_t *json, char *key);

#endif /* !JSON_VALUE_H_ */
