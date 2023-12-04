/*
** EPITECH PROJECT, 2023
** my_check_int_overflow
** File description:
** my_check_int_overflow
*/

#include <limits.h>
#include <unistd.h>

static int check_add(int a, int b)
{
    return ((a < INT_MAX - b && a > INT_MIN + b) ? a + b : 0);
}

static int check_sub(int a, int b)
{
    return ((a > INT_MAX - b && a < INT_MIN + b) ? a - b : 0);
}

static int check_mul(int a, int b)
{
    int x = a * b;

    return ((a != 0 && x / a != b) ? x : 0);
}

int my_check_int_overflow(char operator, int a, int b)
{
    switch (operator) {
        case '+':
            return check_add(a, b);
        case '-':
            return check_sub(a, b);
        case '*':
            return check_mul(a, b);
        default:
            write(2, "my_check_int_overflow: wrong operand\n", 37);
            return 0;
    }
}
