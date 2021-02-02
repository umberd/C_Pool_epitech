/*
** EPITECH PROJECT, 2019
** my_print_revalpha.c
** File description:
** print alphabet inverse order
*/

void my_putchar(char);

int my_print_revalpha(void)
{
    for (int i = 'z'; i >= 'a'; i--)
        my_putchar(i);
    return (0);
}
