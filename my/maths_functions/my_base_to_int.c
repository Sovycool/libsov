/*
** EPITECH PROJECT, 2023
** LibSov
** File description:
** my_base_to_int
*/

#include "../my.h"

static int char_to_int(char c)
{
    int output = my_is_char_in_str(c, "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ");

    if (output == -1)
        output = my_is_char_in_str(c, "0123456789abcdefghijklmnopqrstuvwxyz");
    return output;
}

static int check_nb(char *nb, int base)
{
    int char_as_int = -1;

    for (int i = 0; nb[i]; i++) {
        char_as_int = char_to_int(nb[i]);
        if (char_as_int >= base || char_as_int == -1)
            return 0;
    }
    return 1;
}

int my_base_to_int(char *nb, int base)
{
    int output = 0;

    if (!nb)
        return -1;
    if (!check_nb(nb, base))
        return -1;
    if (base > 36 || base < 2)
        return -1;
    nb = my_revstr(my_strdup(nb));
    for (int i = 0; nb[i] != 0; i++)
        output += char_to_int(nb[i]) * my_pow(base, i);
    free(nb);
    return output;
}
