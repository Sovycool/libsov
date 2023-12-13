/*
** EPITECH PROJECT, 2023
** my_is_prime
** File description:
** Return 1 if n is prime, 0 if not
*/

int my_is_prime(int nb)
{
    if (nb < 0)
        nb *= -1;
    if (nb < 2)
        return 0;
    for (int i = 2; i < nb / 2; i++) {
        if (nb % i == 0)
            return 0;
    }
    return 1;
}
