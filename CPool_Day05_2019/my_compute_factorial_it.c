/*
** EPITECH PROJECT, 2019
** my_compute_factorial_it.c
** File description:
** factorial it method
*/

int my_compute_factorial_it(int nb)
{
    int result = 1;

    if (nb < 0)
        return (0);
    if (nb >= 13)
        return (0);
    for (int i = 1; i <= nb; i++) {
        result = result * i;
    }
    return (result);
}
