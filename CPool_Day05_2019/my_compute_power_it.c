/*
** EPITECH PROJECT, 2019
** my_compute_power_it.c
** File description:
** power_it
*/

int my_compute_power_it(int nb, int p)
{
    int result = 1;
    long result_verif = 1;

    if (p == 0)
        return (1);
    if (p < 0)
        return (0);
    for (int i = 0; i < p; i++) {
        result_verif = result * nb;
        result = result_verif;
    }
    if (result_verif != result)
        return 0;
    return result;
}
