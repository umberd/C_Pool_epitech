/*
** EPITECH PROJECT, 2019
** my_swap.c
** File description:
** Swap 2 numbers
*/

void my_swap(int *a, int *b)
{
    int swap;

    swap = *a;
    *a = *b;
    *b = swap;
}
