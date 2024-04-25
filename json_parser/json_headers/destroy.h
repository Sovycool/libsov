/*
** EPITECH PROJECT, 2024
** Libsov
** File description:
** destroy
*/

#ifndef JSON_DESTROY_H_
    #define JSON_DESTROY_H_

    #include "../jpar.h"

void destroy_json_array(json_array_t *array);
void destroy_json_object(json_object_t *json);
void destroy_json_value(json_value_t *value, json_value_type_t type);

#endif /* !JSON_DESTROY_H_ */
