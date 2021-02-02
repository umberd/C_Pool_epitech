/*
** EPITECH PROJECT, 2019
** my_putnbr_base.c
** File description:
** Convert and print to a base
*/

void my_putchar(char c);

int my_putnbr_base_strlen(char const *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++);
    return (i);
}

int my_putnbr_base(int nbr, char const *base)
{
    int len = my_putnbr_base_strlen(base);

    if (len < 2)
        return 0;
    if (nbr < 0) {
        my_putchar('-');
        if (nbr == -2147483648) {
            my_putchar('2');
            nbr = 147483648;
        } else
            nbr = -nbr;
    }
    if (nbr / len != 0)
        my_putnbr_base(nbr / len, base);
    my_putchar(base[nbr % len]);
    return 0;
}
