/*
** EPITECH PROJECT, 2019
** get_color.c
** File description:
** return the color as an int
*/

int get_color(unsigned char red, unsigned char green, unsigned char blue)
{
    int color = 0;

    color = red << 8;
    color = color + green << 8;
    color = color + blue;
    return color;
}
