/*
** EPITECH PROJECT, 2023
** file_manipulation
** File description:
** fman_display_file
*/

#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdlib.h>

int fman_display_file(char *path)
{
    int fd = open(path, O_RDONLY);
    struct stat s;
    char *str;
    int buff_size;

    stat(path, &s);
    buff_size = s.st_size;
    str = malloc(sizeof(char) * buff_size);
    read(fd, str, buff_size);
    write(1, str, buff_size);
    close(fd);
    free(str);
    return buff_size;
}
