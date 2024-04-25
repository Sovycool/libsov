/*
** EPITECH PROJECT, 2024
** Libsov
** File description:
** json_struct
*/

#ifndef JSON_STRUCT_H_
    #define JSON_STRUCT_H_

typedef enum json_value_type_e {
    JSON_INT,
    JSON_FLOAT,
    JSON_STR,
    JSON_OBJECT,
    JSON_ARRAY,
    JSON_NULL
} json_value_type_t;

typedef union json_value_u {
    int json_int;
    double json_float;
    char *json_string;
    struct json_array_s *json_array;
    struct json_object_s *json_object;
} json_value_t;

typedef struct json_array_s {
    json_value_type_t type;
    json_value_t *value;
    struct json_array_s *next;
} json_array_t;

typedef struct json_object_s {
    char *value_name;
    json_value_type_t type;
    json_value_t *value;
    struct json_object_s *next;
} json_object_t;

#endif /* !JSON_STRUCT_H_ */
