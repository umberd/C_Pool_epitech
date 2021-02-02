/*
** EPITECH PROJECT, 2019
** my_params_to_array.c
** File description:
** return adress of the first cell
*/

#include <stdlib.h>
#include "./include/my.h"

struct info_param *my_params_to_array(int ac, char **av)
{
    int i = 0;
    struct info_param *my_struct;

    my_struct = malloc(sizeof(struct info_param) * (ac + 1));
    for (i = 0; i < ac; i++) {
        my_struct[i].length = my_strlen(av[i]);
        my_struct[i].str = av[i];
        my_struct[i].copy = my_strdup(av[i]);
        my_struct[i].word_array = my_str_to_word_array(av[i]);
    }
    my_struct[i].str = 0;
    return my_struct;
}
