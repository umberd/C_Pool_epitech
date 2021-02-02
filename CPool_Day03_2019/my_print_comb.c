/*
** EPITECH PROJECT, 2019
** my_print_comb.c
** File description:
** my_print_comb
*/

void my_putchar(char);
void my_print_comb_compare(int k, int j, int i);

int my_print_comb(void)
{
    for (int k = '0'; k <= '9'; k++) {
        for (int j = '0'; j <= '9'; j++) {
            for (int i = '0'; i <= '9'; i++) {
                my_print_comb_compare(k, j, i);
            }
        }
    }
    return (0);
}

void my_print_comb_compare(int k, int j, int i)
{
    if (k < j && j < i) {
        my_putchar(k);
        my_putchar(j);
        my_putchar(i);
        if (k != '7') {
            my_putchar(',');
            my_putchar(' ');
        }
    }
}
