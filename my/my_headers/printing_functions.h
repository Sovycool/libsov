/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** printing_functions
*/

#ifndef PRINTING_FUNCTIONS_H_
    #define PRINTING_FUNCTIONS_H_

/*!
** @brief Prints the give character `c`.
** @param c The character you want to print.
** @return `1`
*/
int my_putchar(char c);
/*!
** @brief Prints the given string `str`.
** @param str The string you want to print.
** @return The number of character printed.
*/
int my_putstr(char const *str);
/*!
** @brief Prints the given integer `nb`.
** @param nb The integer you want to print.
** @return The number of character printed.
*/
int my_putint(int nb);
/*!
** @brief Prints the given float `nb`.
** @param nb The float you want to print.
** @param precision The precision of your float.
** @return The number of character printed.
*/
int my_putfloat(double nb, int precision);
/*!
** @brief Prints the given string. You can add `%[flag]` to display values.
** @param str The string you want to print.
** @param ... List of values corresponding to the flags int `str`.
** @return The number of character printed.
*/
int my_printf(char *str, ...);

#endif /* !PRINTING_FUNCTIONS_H_ */
