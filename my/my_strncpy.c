/*
** EPITECH PROJECT, 2023
** my_strncpy
** File description:
** Copies N characters from src to dest
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (i < n && src[i] != 0) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = 0;
    while (i < n) {
        dest[i] = 0;
        i++;
    }
}
