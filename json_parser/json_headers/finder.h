/*
** EPITECH PROJECT, 2024
** Libsov
** File description:
** finder
*/

#ifndef JSON_FINDER_H_
    #define JSON_FINDER_H_

json_object_t *json_finder(json_object_t *json, char *filepath);
json_object_t *json_object_finder(json_object_t *json, char *filepath);
json_array_t *json_array_finder(json_object_t *json, char *filepath);
char *json_string_finder(json_object_t *json, char *filepath);
double json_float_finder(json_object_t *json, char *filepath);
int json_int_finder(json_object_t *json, char *filepath);

json_array_t *array_finder(json_array_t *array, int index);
json_object_t *array_object_finder(json_array_t *array, int index);
json_array_t *array_array_finder(json_array_t *array, int index);
char *array_string_finder(json_array_t *array, int index);
double array_float_finder(json_array_t *array, int index);
int array_int_finder(json_array_t *array, int index);

#endif /* !JSON_FINDER_H_ */
