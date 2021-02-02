/*
** EPITECH PROJECT, 2019
** my_put_nbr.c
** File description:
** display nbr
*/

void my_putchar(char);
void my_put_nbr_recurs_mode(int nb);
void my_put_nbr_mf(void);

int my_put_nbr(int nb)
{
    if (nb == -2147483648)
    {
        my_put_nbr_mf();
        return 0;
    }
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    my_put_nbr_recurs_mode(nb);

    return 0;
}

void my_put_nbr_recurs_mode(int nb)
{
    int a;

    if (nb >= 10) {
        a = nb % 10 + '0';
        nb = nb / 10;
        my_put_nbr_recurs_mode(nb);
    }
    else
    {
        a = nb + '0';
    }
    my_putchar(a);
}

void my_put_nbr_mf(void)
{
    my_putchar('-');
    my_putchar('2');
    my_putchar('1');
    my_putchar('4');
    my_putchar('7');
    my_putchar('4');
    my_putchar('8');
    my_putchar('3');
    my_putchar('6');
    my_putchar('4');
    my_putchar('8');
}
