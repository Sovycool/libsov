/*
** EPITECH PROJECT, 2023
** json_parser
** File description:
** json_struct
*/

#ifndef JSON_STRUCT_H_
    #define JSON_STRUCT_H_

    #include "json_types.h"

typedef enum json_value_type {
    STRING,
    INT,
    DOUBLE,
    OBJECT,
    ARRAY,
    VOID
} json_value_type_t;

typedef struct json_value {
    json_value_type_t type;
    union value {
        char *str_;
        int int_;
        double double_;
        struct json_object *object_;
        struct json_array *array_;
        void *void_;
    } value;
} json_value_t;

typedef struct json_array {
    struct json_value *value;
    struct json_array *next;
} json_array_t;

typedef struct json_pair {
    char *key;
    struct json_value *value;
    struct json_pair *next;
} json_pair_t;

typedef struct json_object {
    struct json_pair *pairs;
} json_object_t;


#endif /* !JSON_STRUCT_H_ */
