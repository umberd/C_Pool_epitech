/*
** EPITECH PROJECT, 2019
** my_print_digits.c
** File description:
** Print all digits
*/

void my_putchar(char);

int my_print_digits(void)
{
    for (char i = '0'; i <= '9'; i++)
        my_putchar(i);
    return (0);
}
