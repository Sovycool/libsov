/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_str_to_word_array
*/

#include "../my.h"
#include <stdlib.h>

static int count_word(char *str, char *delimiter)
{
    int count = 1;

    for (int i = 0; str[i]; i++)
        if (my_is_char_in_str(str[i], delimiter) != -1 &&
            my_is_char_in_str(str[i + 1], delimiter) == -1 &&
            str[i + 1])
            count++;
    return count;
}

static int get_word_len(char *str, char *delimiter)
{
    int word_len = my_are_chars_in_str(delimiter, str);

    if (word_len == -1)
        return my_strlen(str);
    return word_len;
}

char **my_str_to_word_array(char *str, char *delimiter)
{
    int nb_word = count_word(str, delimiter);
    int word_idx = 1;
    int word_len = get_word_len(str, delimiter);
    char **array = malloc(sizeof(char *) * (nb_word + 1));

    array[0] = my_strndup(str, word_len);
    for (int i = word_len; str[i]; i++)
        if (my_is_char_in_str(str[i], delimiter) != -1 &&
            my_is_char_in_str(str[i + 1], delimiter) == -1
            str[i + 1]) {
            word_len = get_word_len(str + i + 1, delimiter);
            array[word_idx] = my_strndup(str + i + 1, word_len);
            i += word_len;
            word_idx++;
        }
    array[nb_word] = NULL;
    return array;
}
