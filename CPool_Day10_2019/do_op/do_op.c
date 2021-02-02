/*
** EPITECH PROJECT, 2019
** do-op
** File description:
** calcul value1 operator value2
*/

#include <stdio.h>
#include "../include/my.h"
#include "../include/do_op.h"

int do_op_check_operand(char *str, int *error)
{
    int i = 0;
    char operator[] = "*/+-%";

    for (i = 0; operator[i] != '\0'; i++) {
        if (str[0] == operator[i]) {
            return (i);
        }
    }
    *error = 84;
    my_put_nbr(0);
    return -1;
}

int main(int argv, char **argc)
{
    int nb1;
    int nb2;
    int error = 0;
    int operator;
    int (*operand[]) (int, int, int *) = {&do_op_mult, &do_op_div, &do_op_add,
                                            &do_op_sub, &do_op_modulo};

    if (argv != 4)
        return (84);
    nb1 = my_getnbr(argc[1]);
    nb2 = my_getnbr(argc[3]);
    operator = do_op_check_operand(argc[2], &error);
    if (error != 84)
        nb1 = operand[operator](nb1, nb2, &error);
    if (error == 84)
        return (84);
    my_put_nbr(nb1);
    return 0;
}
