/*
** EPITECH PROJECT, 2023
** LibSov
** File description:
** my_str_to_word_array
*/

#include "../my.h"

static int count_word(char *str, char *delimiter)
{
    int count = 0;

    if (!str)
        return 0;
    for (int i = 0; str[i]; i++) {
        if (my_is_char_in_str(str[i], delimiter) == -1)
            count++;
        while (my_is_char_in_str(str[i], delimiter) == -1)
            i++;
    }
    return count;
}

static int get_word_len(char *str, char *delimiter)
{
    int i = 0;

    for (; my_is_char_in_str(str[i], delimiter) == -1; i++);
    return i;
}

static void dup_word(char *to_fill, char **to_dup, char *delimiter)
{
    for (int i = 0; my_is_char_in_str((*to_dup)[0], delimiter) == -1; i++) {
        to_fill[i] = (*to_dup)[0];
        (*to_dup)++;
    }
    for (; my_is_char_in_str((*to_dup)[0], delimiter) != -1; (*to_dup)++);
}

char **my_str_to_word_array(char *str, char *delimiter)
{
    int nb_word;
    int word_len;
    char **array;

    if (!str || !delimiter)
        return NULL;
    nb_word = count_word(str, delimiter);
    word_len = get_word_len(str, delimiter);
    array = malloc(sizeof(char *) * (nb_word + 1));
    array[nb_word] = NULL;
    for (; my_is_char_in_str(str[0], delimiter) != -1; str++);
    for (int i = 0; i < nb_word; i++) {
        word_len = get_word_len(str, delimiter);
        array[i] = malloc(sizeof(char) * (word_len + 1));
        array[i][word_len] = 0;
        dup_word(array[i], &str, delimiter);
    }
    return array;
}
