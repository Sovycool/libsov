/*
** EPITECH PROJECT, 2023
** organized
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
