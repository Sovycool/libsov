/*
** EPITECH PROJECT, 2023
** my_strcat_alloc.c
** File description:
** my_strcat_alloc
*/

#include "my.h"
#include <stdlib.h>

char *my_strcat_alloc(char *a, char *b)
{
    char *output;
    int len_a = my_strlen(a);
    int len_b = my_strlen(b);

    output = malloc(sizeof(char) * ((len_a + len_b) + 1));
    for (int i = 0; i < len_a + len_b; i++) {
        if (i < len_a)
            output[i] = a[i];
        else
            output[i] = b[i - len_a];
    }
    output[len_a + len_b] = 0;
    return output;
}
