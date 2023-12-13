/*
** EPITECH PROJECT, 2023
** my_strstr
** File description:
** ...
*/

static int is_all_in(char *str, char const *to_find)
{
    for (int i = 0; to_find[i] != 0; i++)
        if (to_find[i] != str[i])
            return 0;
    return 1;
}

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;

    while (str[i] != 0) {
        if (is_all_in(str + i, to_find))
            return str + i;
        i++;
    }
    return str;
}
