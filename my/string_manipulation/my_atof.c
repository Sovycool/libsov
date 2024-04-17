/*
** EPITECH PROJECT, 2023
** LibSov
** File description:
** my_atof
*/

#include "../my.h"
#include "my_atof.h"
#include <stdlib.h>

static int count_digits(char *str)
{
    int i = 0;

    while (my_is_digit(str[i]))
        i++;
    return i;
}

static struct double_as_string *load_struct(char *str)
{
    struct double_as_string *nb;

    if (!str)
        return NULL;
    nb = malloc(sizeof(struct double_as_string));
    nb->first_digit_index = my_are_chars_in_str("0123456789", str);
    nb->integers = NULL;
    nb->decimals = NULL;
    return nb;
}

static void destroy_struct(struct double_as_string *nb)
{
    free(nb->integers);
    free(nb->decimals);
    free(nb);
}

double my_atof(char *str)
{
    struct double_as_string *nb = load_struct(str);
    double output = 0;

    if (!nb)
        return 0;
    nb->int_nb_digits = count_digits(str + nb->first_digit_index);
    nb->integers = my_strndup(str + nb->first_digit_index, nb->int_nb_digits);
    output += my_base_to_int(nb->integers, 10);
    if (str[nb->first_digit_index + nb->int_nb_digits] == '.'){
        nb->dec_nb_digits = count_digits(
            str + nb->first_digit_index + nb->int_nb_digits + 1);
        nb->decimals = my_strndup(str +
        (nb->first_digit_index + nb->int_nb_digits + 1), nb->dec_nb_digits);
        output +=
            my_base_to_int(nb->decimals, 10) / my_pow(10, nb->dec_nb_digits);
    }
    if (nb->first_digit_index > 0)
        output *= (str[nb->first_digit_index - 1] == '-' ? -1 : 1);
    destroy_struct(nb);
    return output;
}
