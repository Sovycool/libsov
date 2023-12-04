/*
** EPITECH PROJECT, 2023
** my_print_combn
** File description:
** Prints all combinations of N digits
*/

#include "my.h"

static int power_of(int n, int p)
{
    int output = 1;

    while (p > 1) {
        output *= n;
        p--;
    }
    return (output);
}

static int is_nb_valid(int n, int my_int)
{
    int current_digit = my_int % 10;
    int next_digit = (my_int / 10) % 10;

    if (n <= 1) {
        return (1);
    } else if (current_digit <= next_digit) {
        return (0);
    }
    return (is_nb_valid(n - 1, my_int / 10));
}

static void n_print_comma(int activated)
{
    if (activated == 1) {
        my_putchar(',');
        my_putchar(' ');
    }
}

static void print_whole_nbr(int n, int nb)
{
    int current_digit = nb % 10;

    if (n <= 1) {
        return;
    } else {
        print_whole_nbr(n - 1, nb / 10);
    }
    my_putchar(48 + current_digit);
}

void my_print_combn(int n)
{
    int first_print = 0;
    int my_int = 0;
    int limit = power_of(10, n + 1);

    while (my_int < limit) {
        if (is_nb_valid(n, my_int) == 1) {
            n_print_comma(first_print);
            print_whole_nbr(n + 1, my_int);
            first_print = 1;
        }
        my_int++;
    }
}
