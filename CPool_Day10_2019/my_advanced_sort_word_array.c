/*
** EPITECH PROJECT, 2019
** my_advanced_sort_word_array.c
** File description:
** Advancerd Sort Word array
*/

#include "./include/my.h"

int my_aswa_len(char **tab)
{
    int i;

    for (i = 0; tab[i] != 0; i++);
    return i;
}

void my_aswa_swap_str(char **str_one, char **str_two)
{
    char *swap;

    swap = *str_one;
    *str_one = *str_two;
    *str_two = swap;
}

void my_aswa_swap(char **array, int j, int(*cmp)(char const *, char const *))
{
    if (cmp(array[j], array[j+1]) > 0) {
        my_aswa_swap_str(&array[j], &array[j + 1]);
    }
}

int my_advanced_sort_word_array(char **tab,
                                int(*cmp)(char const *, char const *))
{
    int const len = my_aswa_len(tab);

    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            my_aswa_swap(tab, j, cmp);
        }
    }
    return 0;
}
