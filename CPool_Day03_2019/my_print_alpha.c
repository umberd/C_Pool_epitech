/*
** EPITECH PROJECT, 2019
** my_print_alpha
** File description:
** Print all character
*/

void my_putchar(char);

int my_print_alpha(void)
{
    for (char i = 'a'; i <= 'z'; i++)
    {
        my_putchar(i);
    }
    return (0);
}
