/*
** EPITECH PROJECT, 2023
** linked_list
** File description:
** array_len
*/

#include <stdlib.h>

int array_len(void **array)
{
    int i = 0;

    while (array[i] != NULL)
        i++;
    return i;
}
