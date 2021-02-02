/*
** EPITECH PROJECT, 2019
** tools.c
** File description:
** Cummon functions
*/

#include <unistd.h>
#include <stdlib.h>
#include "./include/my.h"

char *malloc_digit(char *to_copy, int i)
{
    char *result;

    result = malloc(sizeof(char) * (i + 1));
    if (to_copy != NULL) {
        my_strcpy(result, to_copy);
        free(to_copy);
    }
    return result;
}
