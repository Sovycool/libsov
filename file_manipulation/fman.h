/*
** EPITECH PROJECT, 2023
** file_manipulation
** File description:
** file_manipulation
*/

#ifndef FILE_MANIPULATION_H_
    #define FILE_MANIPULATION_H_

/*!
** @brief Opens a file and copies its content in a string.
** @param path Path to the file.
** @return `char *` containing the file's content.
*/
char *fman_get_file(char *path);
/*!
** @brief Displays a file content.
** @param path Path to the file.
** @return The number of character printed.
*/
int fman_display_file(char *path);
int fman_dup_file(char *file, char *new);

#endif /* !FILE_MANIPULATION_H_ */
