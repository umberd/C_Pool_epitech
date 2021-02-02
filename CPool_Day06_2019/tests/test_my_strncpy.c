/*
** EPITECH PROJECT, 2019
** unit_test_strncpy
** File description:
** Unit Test of strncpy
*/

#include <criterion/criterion.h>

char *my_strncpy(char *, char const *, int);

Test(my_strncpy, copy_five_characters_in_empty_array)
{
    char dest[6] = {0};
    my_strncpy(dest, "HelloWorld", 5);
    cr_assert_str_eq(dest, "Hello");
}

Test(my_strncpy, copy_zero_characters_in_empty_array)
{
    char dest[6] = {0};
    my_strncpy(dest, "HelloWorld", 0);
    cr_assert_str_eq(dest, "");
}

Test(my_strncpy, copy_one_characters_in_empty_array)
{
    char dest[6] = {0};
    my_strncpy(dest, "HelloWorld", 1);
    cr_assert_str_eq(dest, "H");
}

Test(my_strncpy, copy_ant0_characters_in_empty_array)
{
    char dest[6] = {0};
    my_strncpy(dest, "\0", 5);
    cr_assert_str_eq(dest, "");
}

Test(my_strncpy, copy_negative_string_in_empty_array)
{
    char src[5] = "Hello";
    char my_dest[10] = {0};
    char dest[10] = {0};
    my_strncpy(my_dest, src, 5);
    strncpy(dest, src, 5);
    cr_assert_str_eq(my_dest, dest);
}
