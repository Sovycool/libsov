/*
** EPITECH PROJECT, 2023
** file_manipulation
** File description:
** fman_dup_file
*/

#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdlib.h>
#include "fman.h"

int fman_dup_file(char *file, char *new)
{
    int fd = open(new, O_RDWR | O_CREAT | O_TRUNC, 0777);
    char *file_content = fman_get_file(file);
    struct stat s;
    int file_size;

    if (fd == 0 || file_content == NULL)
        return 0;
    stat(file, &s);
    file_size = s.st_size;
    write(fd, file_content, file_size);
    close(fd);
    free(file_content);
    return 1;
}
