/*
** EPITECH PROJECT, 2023
** my_swap
** File description:
** Swaps two integers content
*/

void my_swap(int *a, int *b)
{
    int temp = *a;

    *a = *b;
    *b = temp;
}
