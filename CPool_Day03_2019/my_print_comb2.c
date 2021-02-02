/*
** EPITECH PROJECT, 2019
** my_print_comb.c
** File description:
** Compare 2 two digit number
*/

void my_putchar(char);
void my_print_comb2_digit(char a, char b, char c, char d);
void my_print_comb2_print(int i, int z);

int my_print_comb2(void)
{
    int i;
    int z;

    for (i = 0; i <= 99; i++) {
        for (z = 1; z <= 99; z++) {
            my_print_comb2_print(i, z);
        }
    }
    return 0;
}

void my_print_comb2_print(int i, int z)
{
    char a = '0';
    char b = '0';
    char c = '0';
    char d = '0';

    if (i >= z)
        return;
    if (i > 9) {
        a = (i / 10) + '0';
        b =  (i % 10) + '0';
    } else
        b = i + '0';
    if (z > 9) {
        c = (z / 10) + '0';
        d = (z % 10) + '0';
    } else
        d = (z + '0');
    my_print_comb2_digit(a, b, c, d);
}

void my_print_comb2_digit(char a, char b, char c, char d)
{
    my_putchar(a);
    my_putchar(b);
    my_putchar(' ');
    my_putchar(c);
    my_putchar(d);
    if (!(a == '9' && b == '8' && c == '9' && d == '9')) {
        my_putchar(',');
        my_putchar(' ');
    }
}
