/*
** EPITECH PROJECT, 2019
** test_my_strcapitalize.c
** File description:
** Unit Test on strcapitalize
*/

#include <criterion/criterion.h>

char *my_strcapitalize(char *str);

Test(my_strcapitalize, all_low)
{
    char str[] = "hello my name is henry";

    my_strcapitalize(str);
    cr_assert_str_eq(str, "Hello My Name Is Henry");
}

Test(my_strcapitalize, normal)
{
    char str[] = "Hello My Name Is Henry";

    my_strcapitalize(str);
    cr_assert_str_eq(str, "Hello My Name Is Henry");
}

Test(my_strcapitalize, str_keyboard_push)
{
    char str[] = "1223322_-__hfdhfbsdfjdsf dfsqfdsqf";

    my_strcapitalize(str);
    cr_assert_str_eq(str, "1223322_-__Hfdhfbsdfjdsf Dfsqfdsqf");
}
