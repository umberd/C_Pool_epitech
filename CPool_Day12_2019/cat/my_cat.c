/*
** EPITECH PROJECT, 2019
** cat.c
** File description:
** reproduce cat
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include "../include/my.h"

int my_cat_text(int ac, char **av);
void reset_buffer(char *buffer, int size);

int my_cat_stand_imput(int fd)
{
    int read_var = 1;
    char buffer[30001];

    while (read_var > 0) {
        reset_buffer(buffer, read_var);
        read_var = read(fd, buffer, 36000);
        write(1, buffer, read_var);
    }
    return 0;
}

int my_cat(int ac, char **av)
{
    if (ac == 1)
        return my_cat_stand_imput(0);
    else if (ac > 1)
        return my_cat_text(ac, av);
    else
        return 84;
    return 0;
}
