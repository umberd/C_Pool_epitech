/*
** EPITECH PROJECT, 2019
** do-op
** File description:
** calcul value1 operator value2
*/

#include "../include/a_opp_struct.h"
#include "../include/adv_do_op.h"
#include "../include/my_opp.h"
#include "../include/my.h"
#include "../include/adv_do_op.h"

int do_op_check_operand(char *str, int *error)
{
    int i = 0;
    for (i = 0; i < 5; i++) {
        if (str[0] == OPERATORS_FUNCS[i].c[0])
            return (i);
    }
    *error = 84;
    for (i = 0; i <= 5; i++) {
        if (OPERATORS_FUNCS[i].c[0] == '\0')
            return (i);
    }
}

int main(int argv, char **argc)
{
    int nb1;
    int nb2;
    int error = 0;
    int operator;

    if (argv != 4)
        return (84);
    nb1 = my_getnbr(argc[1]);
    nb2 = my_getnbr(argc[3]);
    operator = do_op_check_operand(argc[2], &error);
    nb1 = OPERATORS_FUNCS[operator].operand(nb1, nb2, &error);
    if (error == 84)
        return (84);
    my_put_nbr(nb1);
    return 0;
}
