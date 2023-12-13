/*
** EPITECH PROJECT, 2023
** my_isnum
** File description:
** Returns 1 if char is numeric, 0 if not
*/

int my_isnum(char c)
{
    return ((c >= '0' && c <= '9') ? 1 : 0);
}
