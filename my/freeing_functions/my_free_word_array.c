/*
** EPITECH PROJECT, 2023
** LibSov
** File description:
** free_word_array
*/

#include "../my.h"

void my_free_word_array(char **array)
{
    if (!array)
        return;
    for (int i = 0; array[i]; i++)
        free(array[i]);
    free(array);
}
