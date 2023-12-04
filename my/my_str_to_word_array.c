/*
** EPITECH PROJECT, 2023
** my_str_to_word_array
** File description:
** Return array in which each cell contains a word of str
*/

#include "my.h"
#include <stdlib.h>

static int is_alphanum(char c)
{
    if (c >= 'a' && c <= 'z')
        return 1;
    if (c >= 'A' && c <= 'Z')
        return 1;
    if (c >= '0' && c <= '9')
        return 1;
    return 0;
}

static int my_word_len(char const *word)
{
    int i = 0;

    while (is_alphanum(word[i]))
        i++;
    return i;
}

static void fill_tab(char **tab, char const *str, int nb_word)
{
    int word_len;
    int idx_word;
    int str_len = my_strlen(str);

    for (int i = 0; i < str_len; i++) {
        word_len = my_word_len(str + i);
        if (word_len > 0) {
            tab[idx_word] = malloc(sizeof(char *) * word_len);
            tab[idx_word] = my_strndup(str + i, word_len);
            i += word_len;
            idx_word++;
        }
    }
    tab[idx_word] = NULL;
}

char **my_str_to_word_array(char const *str)
{
    int nb_word = 0;
    char **tab;

    for (int i = 0; str[i] != 0; i++)
        if (!is_alphanum(str[i]) && is_alphanum(str[i + 1]))
            nb_word++;
    tab = malloc(sizeof(char **) * (nb_word + 1));
    fill_tab(tab, str, nb_word);
    return tab;
}
