/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** %%
*/

#include <unistd.h>

int my_percent(void)
{
    write(1, "%", 1);
    return 1;
}
