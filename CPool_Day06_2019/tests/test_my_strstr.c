/*
** EPITECH PROJECT, 2019
** test_my_strstr.c
** File description:
** Unit Test of my_strstr.c
*/

#include <criterion/criterion.h>

char *my_strstr(char *str, char const *to_find);

Test(my_strstr, get_char_in_the_middle_of_char)
{
    char str[50] = "LDIJFIJDABCOKFOEFJDFJ";
    char const to_find[50] = "ABC";
    char *a;

    a = my_strstr(str, to_find);
    cr_assert_str_eq(a, "ABCOKFOEFJDFJ");
}

Test(my_strstr, strstr_one_char_on_str)
{
    char str[50] = "A";
    char const to_find[50] = "ABC";
    char *a;

    a = my_strstr(str, to_find);
    cr_assert_null(a);
}

Test(my_strstr, strstr_same_char)
{
    char str[50] = "ABC";
    char const to_find[50] = "ABC";
    char *a;

    a = my_strstr(str, to_find);
    cr_assert_str_eq(a, "ABC");
}

Test(my_strstr, strstr_to_find_null)
{
    char str[50] = "ABCDEFG";
    char const to_find[50] = "";
    char *a;

    a = my_strstr(str, to_find);
    cr_assert_str_eq(a, "ABCDEFG");
}
