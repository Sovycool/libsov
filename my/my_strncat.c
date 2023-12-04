/*
** EPITECH PROJECT, 2023
** my_strncat
** File description:
** Concatenates n char from src str after dest str
*/

char *my_strncat(char *dest, char const *src, int n)
{
    int i = 0;
    int j = 0;

    while (dest[i] != 0)
        i++;
    while (src[j] != 0 || j < n) {
        dest[i + j] = src[j];
        j++;
    }
    dest[i + j] = 0;
    return dest;
}
