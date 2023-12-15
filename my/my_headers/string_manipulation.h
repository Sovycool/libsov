/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** string_manipulation
*/

#ifndef STRING_MANIPULATION_H_
    #define STRING_MANIPULATION_H_

/*!
** @brief Reverse `str`.
** @param str The string you want to reverse.
** @return The given string in reverse.
*/
char *my_revstr(char *str);
/*!
** @brief Duplicates `str`.
** @param str The string you want to duplicate.
** @return A newly allocated string containing the given string.
*/
char *my_strdup(char const *str);
/*!
** @brief Duplicates `n` first characters of `str`.
** @param str The string you want to duplicate.
** @param n How many characters you want to duplicate.
** @return A newly allocated string containing the given string.
*/
char *my_strndup(char const *str, int n);
/*!
** @brief Concatenates two strings together.
** @param a The first string.
** @param b The second string.
** @return A newly allocated string containing the two given strings.
*/
char *my_strcat(char *a, char *b);
/*!
** @brief Concatenate `n` first characters of a string with `m` first characters of another string.
** @param a The first string.
** @param b The second string.
** @param n How many characters of the first string you want to concatenate.
** @param m How many characters of the second string you want to concatenate.
** @return A newly allocated string containing the two given strings.
*/
char *my_strncat(char *a, char *b, int n, int m);
/*!
** @brief Converts `str` into an integer.
** @param str The string containing your integer.
** @return The integer corresponding to your string, `0` by default when no digit can be found.
*/
int my_atoi(char *str);
/*!
** @brief Converts `str` into a float.
** @param str The string containing your float.
** @return The float corresponding to your string as a `double`, `0` by default when no digit can be found.
*/
double my_atof(char *str);

#endif /* !STRING_MANIPULATION_H_ */
