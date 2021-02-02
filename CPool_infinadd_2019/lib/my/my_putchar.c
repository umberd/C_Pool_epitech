/*
** EPITECH PROJECT, 2019
** my_putchar.c
** File description:
** Do not commit
*/

#include <unistd.h>

void my_putchar(char a)
{
    write(1, &a, 1);
}
