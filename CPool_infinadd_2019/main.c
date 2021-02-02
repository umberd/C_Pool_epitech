/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main
*/

#include "./include/my.h"
#include "./include/my_inf_add.h"

void my_putstr_l_z(char const *result, int is_neg)
{
    int i;

    for (i = 0; result[i] == '0'; i++);
    if (result[i] == '\0') {
        my_putchar('0');
        return;
    }
    if (is_neg == 1)
        my_putchar('-');
    my_putstr(&result[i]);
    my_putchar('\n');
}

int my_operator(char **av)
{
    char *result;
    int is_neg = 0;

    if (av[1][0] == '\0' || av[2][0] == '\0')
        return 84;
    if (av[2][0] == '-' && av[1][0] == '-') {
        is_neg = 1;
        result = inf_add(&av[1][1], &av[2][1]);
    }
    if (av[2][0] == '-' && av[1][0] != '-')
        result = inf_less(&av[1][0], &av[2][1], &is_neg);
    if (av[2][0] != '-' && av[1][0] == '-')
        result = inf_less(&av[2][0], &av[1][1], &is_neg);
    if (av[2][0] != '-' && av[1][0] != '-')
        result = inf_add(av[1], av[2]);
    my_putstr_l_z(result, is_neg);
    return 0;
}

int main(int ac, char **av)
{
    if (ac != 3)
        return 0;
    return my_operator(av);
}
