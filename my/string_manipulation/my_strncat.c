/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_strncat
*/

#include "../my.h"
#include <stdlib.h>

char *my_strncat(char *a, char *b, int n, int m)
{
    char *output;
    int len_a = my_strlen(a);
    int len_b = my_strlen(b);

    len_a = (len_a < n ? len_a : n);
    len_b = (len_b < n ? len_b : n);
    output = malloc(sizeof(char) * ((len_a + len_b) + 1));
    for (int i = 0; i < len_a + len_b; i++)
        if (i < len_a)
            output[i] = a[i];
        else
            output[i] = b[i - len_a];
    output[len_a + len_b] = 0;
    return output;
}
