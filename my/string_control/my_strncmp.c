/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_strncmp
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    while (s1[i] == s2[i] && s1[i] && s2[i] && i + 1 < n)
        i++;
    return (s1[i] - s2[i]);
}
