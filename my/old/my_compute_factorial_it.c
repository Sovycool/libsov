/*
** EPITECH PROJECT, 2023
** my_compute_factorial_it
** File description:
** Do factorials (iterative) Returns 0 in case of error
*/

static int is_neg(int nb)
{
    return (nb < 0) ? 0 : nb;
}

int my_compute_factorial_it(int nb)
{
    if (nb == 0)
        return 1;
    if (nb >= 13)
        return 0;
    for (int i = nb - 1; i > 1; --i)
        nb *= i;
    return is_neg(nb);
}
