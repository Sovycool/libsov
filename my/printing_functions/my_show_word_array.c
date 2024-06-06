/*
** EPITECH PROJECT, 2023
** LibSov
** File description:
** my_show_word_array
*/

#include "../my.h"

int my_show_word_array(char *const *tab, char const *delimiter)
{
    int count = 0;

    for (int i = 0; tab[i]; i++) {
        count += my_printf(tab[i]);
        if (tab[i + 1])
            my_putstr(delimiter);
    }
    my_putchar('\n');
    return count;
}
