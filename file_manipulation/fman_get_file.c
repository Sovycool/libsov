/*
** EPITECH PROJECT, 2023
** file_manipulation
** File description:
** fman_get_file
*/

#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdlib.h>

char *fman_get_file(char *path)
{
    int fd = -1;
    struct stat s;
    char *output;
    int buff_size;

    if (path)
        fd = open(path, O_RDONLY);
    if (fd == -1)
        return NULL;
    stat(path, &s);
    buff_size = s.st_size;
    output = malloc(sizeof(char) * (buff_size + 1));
    if (!output)
        return NULL;
    read(fd, output, buff_size);
    output[buff_size] = 0;
    close(fd);
    return output;
}
