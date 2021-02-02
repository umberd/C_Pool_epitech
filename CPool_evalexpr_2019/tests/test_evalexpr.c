/*
** EPITECH PROJECT, 2019
** test_evalexpr.c
** File description:
** Unit Tests of evalexpr
*/

int eval_expr(char *str);

#include <criterion/criterion.h>

Test(evalexpr, 4_plus_4)
{
    cr_assert_eq(eval_expr("4+4"), 8);
}

Test(evalexpr, 5_less_3)
{
    cr_assert_eq(eval_expr("5-3"), 2);
}

Test(evalexpr, 5_mult_5)
{
    cr_assert_eq(eval_expr("5*5"), 25);
}

Test(evalexpr, less_less_5)
{
    cr_assert_eq(eval_expr("-(-5"), 5);
}

Test(evalexpr, less_five)
{
    cr_assert_eq(eval_expr("-+5"), -5);
}

Test(evalexpr, dix_plus_five)
{
    cr_assert_eq(eval_expr("10_+5"), 10);
}

Test(evalexpr, 3_mult_4_div_2_mod_4)
{
    cr_assert_eq(eval_expr("3*4/2%4"), 2);
}

Test(evalexpr, multiple_op_one)
{
    cr_assert_eq(eval_expr("5+(2*-1*(-3*-(-1+4))+9*-2)"), -31);
}

Test(evalexpr, multiple_op_two)
{
    cr_assert_eq(eval_expr("5+(2*-1*(-3*-(-1+4))+9*-2)-2+2"), -31);
}

Test(evalexpr, multiple_op_three)
{
    cr_assert_eq(eval_expr("5+(2*-1*(-3*-(-1+4))+9*-2+2%2+2/2-1"), -31);
}

Test(evalexpr, multiple_five_five)
{
    cr_assert_eq(eval_expr("5*5*5"), 125);
}

Test(evalexpr, null_str)
{
    cr_assert_eq(eval_expr(NULL), 0);
}
