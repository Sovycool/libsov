/*
** EPITECH PROJECT, 2023
** my_header
** File description:
** Contains protos for libmy functions
*/

#ifndef LIBMY
    #define LIBMY

/*
** PRINT FUNCTIONS
*/
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

/*
** STRING MANIPULATION
*/
/*!
** @brief Mesure the length of a given string.
** @param str The string you want the length of.
** @return The number of character in your string.
*/
int my_strlen(char const *str);
/*!
** @brief Reverse a string.
** @param str The string you want to reverse.
** @return A copy of the given string in reverse.
*/
char *my_revstr(char const *str);
/*!
** @brief Duplicates a string.
** @param str The string you want to duplicate.
** @return A newly allocated string containing a new string.
*/
char *my_strdup(char const *str);
/*!
** @brief Concatenates two strings together.
** @param a The first string.
** @param b The second string.
** @return A newly allocated string containing the two given strings.
*/
char *my_strcat(char *a, char *b);

/*
** MATHS FUNCTIONS
*/
/*!
** @brief Returns the absolute value of `nb`.
** @param nb The number you want the absolute of.
** @return Absolute value of `nb`
*/
double my_abs(double nb);
/*!
** @brief Returns `nb` to the power of `exp`.
** @param nb The number you want the power of.
** @param exp Exposant of your number.
** @return `nb` to the power of `exp`.
*/
double my_pow(double nb, int exp);
/*!
** @brief Returns `nb` in base `base`.
** @param nb The number you want to convert.
** @param base Base to convert to (between 2 and 36).
** @return `nb` in base `base`.
*/
char *my_int_to_base(int nb, int base);
/*!
** @brief Returns `nb` in base `base` to a base 10 int.
** @param nb The number you want to convert.
** @param base Base to convert to (between 2 and 36).
** @return `nb` in base 10.
*/
int my_base_to_int(char *nb, int base);

#endif
