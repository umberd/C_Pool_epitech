/*
** EPITECH PROJECT, 2019
** my_show_param_array.c
** File description:
** display the content of an array
*/

#include "./include/my.h"

int my_show_param_array(struct info_param const *par)
{
    int i = 0;
    for (i = 0; par[i].str != 0; i++) {
        my_putstr(par[i].str);
        my_putchar('\n');
        my_put_nbr(par[i].length);
        my_putchar('\n');
        my_show_word_array(par[i].word_array);
    }
    return 0;
}
