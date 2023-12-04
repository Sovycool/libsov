/*
** EPITECH PROJECT, 2023
** my_show_word_array
** File description:
** Displays an array of word, one per line
*/

#include "my.h"
#include <stddef.h>

int my_show_word_array(char *const *tab)
{
    for (int i = 0; tab[i] != 0 || tab[i] != NULL; i++) {
        my_putstr(tab[i]);
        my_putchar('\n');
    }
    return 0;
}
