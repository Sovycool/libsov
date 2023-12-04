/*
** EPITECH PROJECT, 2023
** my_print_comb2
** File description:
** desc
*/

#include "my.h"

static void print_nb(int a, int b)
{
    my_putchar(48 + (a / 10));
    my_putchar(48 + (a % 10));
    my_putchar(' ');
    my_putchar(48 + (b / 10));
    my_putchar(48 + (b % 10));
}

static void print_comma(int first_print)
{
    if (first_print == 1) {
        my_putchar(',');
        my_putchar(' ');
    }
}

void my_print_comb2(void)
{
    int a = 0;
    int b = 0;
    int first_print = 0;

    while (a <= 99) {
        if (a != b) {
            print_comma(first_print);
            print_nb(a, b);
            first_print = 1;
        }
        b++;
        if (b > 99) {
            a++;
            b = a;
        }
    }
}
