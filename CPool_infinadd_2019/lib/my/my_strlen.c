/*
** EPITECH PROJECT, 2019
** my_strlen.c
** File description:
** Return the number of characters found in a string
*/

int my_strlen(char const *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++);
    return (i);
}
