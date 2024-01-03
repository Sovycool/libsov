/*
** EPITECH PROJECT, 2023
** json_parser
** File description:
** json_struct
*/

#ifndef JSON_STRUCT_H_
    #define JSON_STRUCT_H_

    #include "json_types.h"
    #include "../../linked_list/ll.h"

enum json_value_type {
    STRING,
    BOOL,
    NUMBER,
    OBJECT,
    ARRAY,
    VOID
};

struct json_value {
    enum json_value_type type;
    union value {
        char *str_;
        int *bool_;
        double *number_;
        struct json_object *object_;
        linked_list_t *array_;
        void *void_;
    } value;
};

struct json_pair {
    char *key;
    struct json_value *value;
};

struct json_object {
    linked_list_t *pairs;
};


#endif /* !JSON_STRUCT_H_ */
