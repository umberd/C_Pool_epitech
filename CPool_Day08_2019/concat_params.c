/*
** EPITECH PROJECT, 2019
** concat_params.c
** File description:
** Concat params
*/

#include <stdlib.h>

int my_strlen(char const *str);
char *my_strcat(char *dest, char const *src);

char *concat_params(int argc, char **argv)
{
    int len_dest = 0;
    char *dest;

    for (int i = 0; i < argc; i++)
        len_dest += my_strlen(argv[i]);
    dest = malloc(sizeof(char) * (len_dest + 1));
    for (int i = 0; i < argc; i++) {
        dest = my_strcat(dest, argv[i]);
        if (i + 1 != argc)
            my_strcat(dest, "\n");
    }
    return dest;
}
