/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** string_manipulation
*/

#ifndef STRING_MANIPULATION_H_
    #define STRING_MANIPULATION_H_

/*!
** @brief Reverse a string.
** @param str The string you want to reverse.
** @return The given string in reverse.
*/
char *my_revstr(char *str);
/*!
** @brief Duplicates a string.
** @param str The string you want to duplicate.
** @return A newly allocated string containing the given string.
*/
char *my_strdup(char const *str);
/*!
** @brief Concatenates two strings together.
** @param a The first string.
** @param b The second string.
** @return A newly allocated string containing the two given strings.
*/
char *my_strcat(char *a, char *b);

#endif /* !STRING_MANIPULATION_H_ */
