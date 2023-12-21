/*
** EPITECH PROJECT, 2023
** json_parser
** File description:
** json_pair
*/

#ifndef JSON_PAIR_H_
    #define JSON_PAIR_H_

    #include "json_types.h"

/*
Creates new empty json key/value pair.
*/
json_pair_t *new_json_pair(void);
void destroy_json_pair(json_pair_t *pair);
void display_json_pair(json_pair_t *pair, int tab);
void display_json_pairs(linked_list_t *pairs, int tab);

#endif /* !JSON_PAIR_H_ */
