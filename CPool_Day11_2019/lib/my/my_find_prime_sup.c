/*
** EPITECH PROJECT, 2019
** my_find_prime_sup.c
** File description:
** Find the smallest prime number greater/equal to the number given
*/

int my_is_prime(int);

int my_find_prime_sup(int nb)
{
    int i = nb;

    if (nb <= 2)
        return 2;
    while (my_is_prime(i) == 0)
        i++;
    return i;
}
