/*
** EPITECH PROJECT, 2019
** test_my_put_nbr.c
** File description:
** test nbr
*/

int my_put_nbr(int nb);

int main()
{
    my_put_nbr(1000);
    my_put_nbr(0);
    my_put_nbr(-0);
    my_put_nbr(-2147483647);
    my_put_nbr(2147483647);
    my_put_nbr(-42);
    my_put_nbr(-2147483648);

    return (0);
}
