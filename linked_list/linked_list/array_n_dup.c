/*
** EPITECH PROJECT, 2023
** linked_list
** File description:
** array_n_dup
*/

#include "../ll.h"
#include <stdlib.h>

void **array_n_dup(void **array, int n)
{
    int i = 0;
    void **new_array = malloc(
        sizeof(void *) * (n < array_len(array) ? n + 1 : array_len(array) + 1)
    );

    while (array[i] && i < n) {
        new_array[i] = array[i];
        i++;
    }
    new_array[i] = NULL;
    return new_array;
}
