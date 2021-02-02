/*
** EPITECH PROJECT, 2019
** test_my_strncmp.c
** File description:
** test_y_strncmp.c
*/

#include <criterion/criterion.h>

int my_strncmp(char const *s1, char const *s2, int);

Test(my_strncmp, Same_Words)
{
    char const s1[] = "HelloWorld";
    char const s2[] = "HelloWorld";

    cr_assert_eq(my_strncmp(s1, s2, 1), 0);
}

Test(my_strncmp, strncmp_empty_s1)
{
    char const s1[] = "";
    char const s2[] = "HelloWorld";

    cr_assert_eq(my_strncmp(s1, s2, 1), -'H');
}

Test(my_strncmp, empty_s2)
{
    char const s1[] = "HelloWorld";
    char const s2[] = "";

    cr_assert_eq(my_strncmp(s1, s2, 1), 'H');
}

Test(my_strncmp, empty_s1s2)
{
    char const s1[] = "";
    char const s2[] = "";

    cr_assert_null(my_strncmp(s1, s2, 1));
}

Test(my_strncmp, empty_s1s2_zero)
{
    char const s1[] = "HelloWorld";
    char const s2[] = "HelloWorld";

    cr_assert_null(my_strncmp(s1, s2, 0));
}

Test(my_strncmp, empty_s1s2_five)
{
    char const s1[] = "HelloWorld";
    char const s2[] = "HelloWorld";

    cr_assert_null(my_strncmp(s1, s2, 5));
}

Test(my_strncmp, empty_n_less_1)
{
    char const s1[] = "";
    char const s2[] = "";

    cr_assert_null(my_strncmp(s1, s2, -1));
}
