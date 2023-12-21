/*
** EPITECH PROJECT, 2023
** json_parser
** File description:
** json_object
*/

#ifndef JSON_OBJECT_H_
    #define JSON_OBJECT_H_

    #include "json_types.h"

/*!
** @brief Creates a new empty json object.
*/
json_object_t *new_json_object(void);
void destroy_json_object(json_object_t *object);
void display_json_object(json_object_t *object, int tab);

#endif /* !JSON_OBJECT_H_ */
