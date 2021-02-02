/*
** EPITECH PROJECT, 2019
** my_putstr.c
** File description:
** this is my_putstr.c
*/

void my_putchar(char);

int my_putstr(char const *str)
{
    for (int i = 0;  str[i] != '\0'; i++) {
        my_putchar(str[i]);
    }
    return (0);
}
