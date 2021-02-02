/*
** EPITECH PROJECT, 2019
** test_my_revstr.c
** File description:
** Unit Test of my_revstr
*/

#include <criterion/criterion.h>

char *my_revstr(char *);

Test(my_rev_str, rev_string_Hello_World)
{
    char dest[] = "HelloWorld";
    my_revstr(dest);
    cr_assert_str_eq(dest, "dlroWolleH");
}

Test(my_rev_str, rev_string_Hello_World1)
{
    char dest[] = "HelloWorld1";
    my_revstr(dest);
    cr_assert_str_eq(dest, "1dlroWolleH");
}

Test(my_rev_str, rev_string_H)
{
    char dest[] = "H";
    my_revstr(dest);
    cr_assert_str_eq(dest, "H");
}

Test(my_rev_str, rev_string_empty)
{
    char dest[] = "";
    my_revstr(dest);
    cr_assert_str_eq(dest, "");
}

Test(my_rev_str, rev_string_He)
{
    char dest[] = "He";
    my_revstr(dest);
    cr_assert_str_eq(dest, "eH");
}
