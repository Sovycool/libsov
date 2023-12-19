/*
** EPITECH PROJECT, 2023
** json_parser
** File description:
** json_display
*/

#ifndef JSON_DISPLAY_H_
    #define JSON_DISPLAY_H_

    #include "json_types.h"

void display_json(json_object_t *json);
void display_object(json_object_t *object, int tab);
void display_pairs(linked_list_t *pairs, int tab);
void display_pair(json_pair_t *pair, int tab);
void display_value(json_value_t *value, int tab);
void display_array(linked_list_t *array, int tab);

#endif /* !JSON_DISPLAY_H_ */
