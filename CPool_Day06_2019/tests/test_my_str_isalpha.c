/*
** EPITECH PROJECT, 2019
** test_my_str_isalpha.c
** File description:
** unit test is_alpha
*/

#include <criterion/criterion.h>

int my_str_isalpha(char const *str);

Test(my_str_isalpha, case_no_char)
{
    char str[] = "";

    cr_assert_eq(my_str_isalpha(str), 1);
}

Test(my_str_isalpha, case_full_alpha)
{
    char str[] = "AAA";

    cr_assert_eq(my_str_isalpha(str), 1);
}

Test(my_str_isalpha, case_char_nbr)
{
    char str[] = "14355AAAA";

    cr_assert_null(my_str_isalpha(str));
}

Test(my_str_isalpha, case_char_symb)
{
    char str[] = "__-5AAAA";

    cr_assert_eq(my_str_isalpha(str), 0);
}

Test(my_str_isalpha, case_char_low)
{
    char str[] = "aaa";

    cr_assert_eq(my_str_isalpha(str), 1);
}
