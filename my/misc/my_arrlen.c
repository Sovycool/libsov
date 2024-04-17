/*
** EPITECH PROJECT, 2024
** LibSov
** File description:
** my_arrlen
*/

int my_arrlen(void **array)
{
    int i = 0;

    if (!array)
        return -1;
    for (; array[i]; i++);
    return i;
}
