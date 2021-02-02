/*
** EPITECH PROJECT, 2019
** test_cat.c
** File description:
** Unit Test on cat
*/

#include <criterion/criterion.h>

int my_cat(int ac, char **av);
int my_error_handle(char *av, int error);


Test(func_cat, ac_equal_3_and_str)
{
    char *str[] = {"Makefile", "filenotexist.ddf", "../"};
    int ac = 3;

    cr_assert_eq(my_cat(ac, str), 84);
}

Test(func_cat, ac_equal_zero)
{
    char *str[] = {"Makefile", "filenotexist.ddf", "my_cat_text.c"};
    int	ac = 0;

    cr_assert_eq(my_cat(ac, str), 84);
}

Test(func_cat, ac_equal_zero_2)
{
    char **str = NULL;
    int	ac = 0;

    cr_assert_eq(my_cat(ac, str), 84);
}

Test(func_cat, handle_error)
{
    char str[] = "AAA";

    cr_assert_eq(my_error_handle(str, 13), 84);
    cr_assert_eq(my_error_handle(str, 2), 84);
    cr_assert_eq(my_error_handle(str, 21), 84);
    cr_assert_eq(my_error_handle(str, 0), 84);
    cr_assert_eq(my_error_handle(str, 1), 84);
}
