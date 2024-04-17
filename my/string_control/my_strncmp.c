/*
** EPITECH PROJECT, 2023
** LibSov
** File description:
** my_strncmp
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    if (!s1 && !s2)
        return 0;
    if (!s1)
        return s2[0];
    if (!s2)
        return s1[0];
    while (s1[i] == s2[i] && s1[i] && s2[i] && i + 1 < n)
        i++;
    return (s1[i] - s2[i]);
}
