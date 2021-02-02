/*
** EPITECH PROJECT, 2019
** my_sort_word_array.c
** File description:
** sort word array
*/

#include "./include/my.h"

int my_swa_len(char **tab)
{
    int i;

    for (i = 0; tab[i] != 0; i++);
    return i;
}

void my_swa_swap_str(char **str_one, char **str_two)
{
    char *swap;

    swap = *str_one;
    *str_one = *str_two;
    *str_two = swap;
}

void my_swa_swap(char **array, int j)
{
    if (my_strcmp(array[j], array[j+1]) > 0)
        my_swa_swap_str(array + j, array + j + 1);
}

int my_sort_word_array(char **tab)
{
    int len = my_swa_len(tab);

    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            my_swa_swap(tab, j);
        }
    }
    return 0;
}
