/*
** EPITECH PROJECT, 2019
** my_usage.c
** File description:
** my_usage.c
*/

#include "../include/my.h"

int my_usage(int nb1, int nb2, int *error)
{
    (void) nb1;
    (void) nb2;
    my_putstr("error: only [ + - / * % ] are supported");
    *error = 84;
    return (*error);
}
