/*
** EPITECH PROJECT, 2019
** my_compute_power_rec.c
** File description:
** Rec of power
*/

#include <stdio.h>

int my_compute_power_rec(int nb, int p)
{
    int result = 1;

    if (p == 0)
        return 1;
    if (p < 0)
        return 0;
    result = my_compute_power_rec(nb, p - 1) * nb;
    return (result);
}
