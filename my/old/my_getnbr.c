/*
** EPITECH PROJECT, 2023
** my_getnbr
** File description:
** Extract as an integer the first number found in a given string
*/

static int is_char_nb(char c)
{
    if ('0' <= c && c <= '9') {
        return (1);
    }
    return (0);
}

static int is_oob(long l)
{
    if (l > 2147483647 || l < -2147483648) {
        return 1;
    }
    return 0;
}

static int my_getnbr2(char const *str, int pos, int sign)
{
    int i = pos;
    long output = 0;

    while (is_char_nb(str[i + 1]) == 1) {
        output += (str[i] - '0');
        output *= 10;
        if (is_oob(output) == 1) {
            return 0;
        }
        i++;
    }
    output += str[i] - '0';
    output *= sign;
    if (is_oob(output) == 1)
        return 0;
    return (output);
}

int my_getnbr(char const *str)
{
    int i = 0;

    while (str[i] != 0) {
        if (str[i] == '-' && is_char_nb(str[i + 1]) == 1) {
            return (my_getnbr2(str, i + 1, -1));
        }
        if (is_char_nb(str[i]) == 1) {
            return (my_getnbr2(str, i, 1));
        }
        i++;
    }
    return 0;
}
