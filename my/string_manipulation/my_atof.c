/*
** EPITECH PROJECT, 2023
** libmy
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

double my_atof(char *str)
{
    struct double_as_string nb = {my_are_chars_in_str("0123456789", str)};
    double output = 0;

    nb.int_nb_digits = count_digits(str + nb.first_digit_index);
    nb.integers = my_strndup(str + nb.first_digit_index, nb.int_nb_digits);
    output += my_base_to_int(nb.integers, 10);
    if (str[nb.first_digit_index + nb.int_nb_digits] == '.'){
        nb.dec_nb_digits = count_digits(
            str + nb.first_digit_index + nb.int_nb_digits + 1);
        nb.decimals = my_strndup(str +
            (nb.first_digit_index + nb.int_nb_digits + 1), nb.dec_nb_digits);
        output +=
            my_base_to_int(nb.decimals, 10) / my_pow(10, nb.dec_nb_digits);
    }
    if (nb.first_digit_index > 0)
        if (str[nb.first_digit_index - 1] == '-')
            output = -output;
    free(nb.integers);
    free(nb.decimals);
    return output;
}