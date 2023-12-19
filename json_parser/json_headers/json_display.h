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
void display_pairs(linked_list_t *pairs, int tab);
void display_pair(json_pair_t *pair);

#endif /* !JSON_DISPLAY_H_ */
