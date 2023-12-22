/*
** EPITECH PROJECT, 2023
** libsov
** File description:
** libmain
*/

#include "my/my.h"
#include "linked_list/linked_list.h"
#include "json_parser/jpar.h"
#include "file_manipulation/file_manipulation.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

int main(void)
{
    char *str = fman_get_file("test.json");
    json_object_t *json = extract_json(str);

    my_printf("The extracted file :\n%s\n\n", str);
    my_printf("The extracted json :\n\n");
    display_json(json);
    destroy_json(json);
    free(str);
    return 0;
}
