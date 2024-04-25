/*
** EPITECH PROJECT, 2023
** LibSov
** File description:
** my_word_array_to_str
*/

#include "../my.h"
#include <stdlib.h>

char *my_word_array_to_str(char **array, char *delimiter)
{
    char *output = NULL;
    char *tmp_ptr = NULL;

    if (!array || !delimiter)
        return NULL;
    output = my_strdup(array[0]);
    for (int i = 1; array[i]; i++) {
        tmp_ptr = output;
        output = my_strcat(output, delimiter);
        free(tmp_ptr);
        tmp_ptr = output;
        output = my_strcat(output, array[i]);
        free(tmp_ptr);
    }
    return output;
}
