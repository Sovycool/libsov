/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** string_control
*/

#ifndef STRING_CONTROL_H_
    #define STRING_CONTROL_H_

/*!
** @brief Checks if `c` is a digit.
** @param c The character you want to check.
** @return `1` if true, `0` if false.
*/
int my_is_digit(char c);
/*!
** @brief Mesure the length of `str`.
** @param str The string you want the length of.
** @return The number of character in `str`.
*/
int my_strlen(char const *str);
/*!
** @brief Finds `c` in `str`.
** @param c The character you want to find.
** @param str The string you want to search in.
** @return The index of the first occurrence of `c` in `str`.
** `-1` if not found.
*/
int my_is_char_in_str(char c, char const *str);
/*!
** @brief Finds `chars` in `str`.
** @param chars The list of characters you want to find.
** @param str The string you want to search in.
** @return The index of the first occurrence of `chars` in `str`.
** `-1` if not found.
*/
int my_are_chars_in_str(char const *chars, char const *str);
/*!
** @brief Finds `sequence` in `str`.
** @param sequence The sequence you want to find.
** @param str The string you want to search in.
** @return The index of the first occurrence of `sequence` in `str`.
** `-1` if not found.
*/
int my_is_str_in_str(char const *sequence, char const *str);
/*!
** @brief Compares `s1` and `s2`
** @param s1 The first string to compare.
** @param s2 The second string to compare.
** @return The difference between the firsts non-equal characters in
** the two strings. `0` if strings are the same.
*/
int my_strcmp(char const *s1, char const *s2);
/*!
** @brief Compares the `n` first characters of `s1` and `s2`
** @param s1 The first string to compare.
** @param s2 The second string to compare.
** @param n How many characters you want to compare
** @return The difference between the firsts non-equal characters in
** the two strings. `0` if strings are the same.
*/
int my_strncmp(char const *s1, char const *s2, int n);

#endif /* !STRING_CONTROL_H_ */
