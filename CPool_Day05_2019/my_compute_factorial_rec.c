/*
** EPITECH PROJECT, 2019
** my_compute_factorial_rec
** File description:
** Rec mode of factorial
*/

int my_compute_factorial_rec(int nb)
{
    if (nb < 0)
        return 0;
    if (nb <= 1)
        return 1;
    if (nb >= 13)
        return 0;
    return (my_compute_factorial_rec(nb - 1) * nb);
}
