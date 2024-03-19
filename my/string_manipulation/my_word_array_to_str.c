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
    char *output = my_strdup(array[0]);
    char *tmp_ptr;

    if (array[1]) {
        tmp_ptr = output;
        output = my_strcat(output, delimiter);
        free(tmp_ptr);
    }
    for (int i = 1; array[i]; i++) {
        tmp_ptr = output;
        output = my_strcat(output, array[i]);
        free(tmp_ptr);
        if (array[i + 1]) {
            tmp_ptr = output;
            output = my_strcat(output, delimiter);
            free(tmp_ptr);
        }
    }
    return output;
}
