/*
** EPITECH PROJECT, 2019
** swap_endian_color.c
** File description:
** Change the Endianness of the color
*/

union color_union {
    int color;
    unsigned char byte[4];
};

int swap_endian_color(int color)
{
    unsigned char temp = 0;
    union color_union c_swap;

    c_swap.color = color;
    for (int i = 0; i < 2; i++) {
        temp = c_swap.byte[i];
        c_swap.byte[i] = c_swap.byte[4 - i - 1];
        c_swap.byte[4 - i - 1] = temp;
    }
    return c_swap.color;
}
