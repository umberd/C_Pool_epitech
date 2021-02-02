/*
** EPITECH PROJECT, 2019
** my_cat_text.c
** File description:
** cat texts
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include "../include/my.h"

void reset_buffer(char *buffer, int size);

void my_putchar_error(char a)
{
    write(2, &a, 1);
}

int my_putstr_error(char const *str)
{
    for (int i = 0;  str[i] != '\0'; i++) {
        my_putchar_error(str[i]);
    }
    return (0);
}

int my_error_handle(char *av, int error)
{
    my_putstr_error("cat: ");
    if (error == 13) {
        my_putstr_error(av);
        my_putstr_error(": Permission denied\n");
        return 84;
    }
    if (error == 2) {
        my_putstr_error(av);
        my_putstr_error(": No such file or directory\n");
        return 84;
    }
    if (error == 21) {
        my_putstr_error(av);
        my_putstr_error(": Is a directory\n");
        return 84;
    }
    if (error != 0)
        my_put_nbr(error);
    return 84;
}

int my_cat_text(int ac, char **av)
{
    int fd;
    int error = 0;
    int read_size = 0;
    char buffer[30001];

    for (int i = 1; i < ac; i++) {
        errno = 0;
        fd = open(av[i], O_RDONLY);
        if (fd == -1) {
            error = my_error_handle(av[i], errno);
        } else {
            my_cat_stand_imput(fd);
            close(fd);
        }
    }
    return error;
}
