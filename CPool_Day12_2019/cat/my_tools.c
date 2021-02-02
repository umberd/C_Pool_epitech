/*
** EPITECH PROJECT, 2019
** tools.c
** File description:
** usefull for many files on this task
*/

#include <errno.h>

void reset_buffer(char *buffer, int size)
{
    for (int i = 0; i <= size; i++) {
        buffer[i] = 0;
    }
}
