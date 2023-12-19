/*
** EPITECH PROJECT, 2023
** json_parser
** File description:
** json_destroy
*/

#ifndef JSON_DESTROY_H_
    #define JSON_DESTROY_H_

    #include "json_types.h"

void destroy_json(json_object_t *json);
void destroy_pair(json_pair_t *pair);
void destroy_value(json_value_t *value);
void destroy_array(linked_list_t *list);

#endif /* !JSON_DESTROY_H_ */
