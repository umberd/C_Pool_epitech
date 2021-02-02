/*
** EPITECH PROJECT, 2019
** my_strdup.c
** File description:
** Allocate memory and cpy a string
*/

#include <stdlib.h>

int my_strlen(char const *str);
char *my_strcpy(char *dest, char const *src);

char *my_strdup(char const *src)
{
    char *dest;
    int len = my_strlen(src);

    dest = malloc(sizeof(char) * (len + 1));
    return my_strcpy(dest, src);
}
