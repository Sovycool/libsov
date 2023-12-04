/*
** EPITECH PROJECT, 2023
** my_compute_factorial_rec
** File description:
** Returns factorial of nb (rec)
*/

int my_compute_factorial_rec(int nb)
{
    if (nb == 0)
        return 1;
    if (nb < 0 || nb >= 13)
        return 0;
    if (nb <= 1)
        return nb;
    return (nb * my_compute_factorial_rec(nb - 1));
}
