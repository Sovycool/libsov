/*
** EPITECH PROJECT, 2023
** my_find_prime_sup
** File description:
** Find smallest prime greater or equal to n
*/

#include "my.h"

int my_find_prime_sup(int nb)
{
    if (my_is_prime(nb))
        return nb;
    return my_find_prime_sup(nb + 1);
}
