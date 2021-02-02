/*
** EPITECH PROJECT, 2019
** do_op_operand.c
** File description:
** do_op_operand
*/

#include "../include/my.h"
#include "../include/do_op.h"

int do_op_mult(int nb1, int nb2, int *error)
{
    *error = 0;
    return (nb1 * nb2);
}

int do_op_div(int nb1, int nb2, int *error)
{
    if (nb2 == 0) {
        *error = 84;
        my_putstr("Stop: division by zero");
        return 0;
    } else {
        *error = 0;
        return (nb1 / nb2);
    }
}

int do_op_add(int nb1, int nb2, int *error)
{
    *error = 0;
    return (nb1 + nb2);
}

int do_op_sub(int nb1, int nb2, int *error)
{
    *error = 0;
    return (nb1 - nb2);
}

int do_op_modulo(int nb1, int nb2, int *error)
{
    *error = 0;
    if (nb2 == 0) {
        my_putstr("Stop: modulo by zero");
        *error = 84;
        return 0;
    }
    return (nb1 % nb2);
}
