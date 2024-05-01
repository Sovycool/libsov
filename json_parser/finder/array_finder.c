/*
** EPITECH PROJECT, 2024
** Libsov
** File description:
** array_finder
*/

#include "../jpar.h"

json_array_t *array_finder(json_array_t *array, int index)
{
    json_array_t *arr_to_find = array;

    for (int i = 0; i < index && arr_to_find; i++)
        arr_to_find = arr_to_find->next;
    if (!arr_to_find)
        return NULL;
    return arr_to_find;
}
