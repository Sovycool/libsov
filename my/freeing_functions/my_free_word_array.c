/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** free_word_array
*/

#include <stdlib.h>

void my_free_word_array(char **array)
{
    for (int i = 0; array[i]; i++)
        free(array[i]);
    free(array);
}
