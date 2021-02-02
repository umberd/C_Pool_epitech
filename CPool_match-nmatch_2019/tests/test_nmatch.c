/*
** EPITECH PROJECT, 2019
** test_match.c
** File description:
** Unit Test of match
*/

#include <criterion/criterion.h>

int nmatch(char *s1, char *s2);

Test(nmatch, match_void_strings)
{
    cr_assert_eq(nmatch("", ""), 1);
}

Test(nmatch, match_s1_void_s2_not_void)
{
    cr_assert_eq(nmatch("", "abc"), 0);
}

Test(nmatch, match_s1_not_void_s2_void)
{
    cr_assert_eq(nmatch("abc", ""), 0);
}

Test(nmatch, match_s1_equal_s2)
{
    cr_assert_eq(nmatch("abc", "abc"), 1);
}

Test(nmatch, match_s1_s2_non_equal)
{
    cr_assert_eq(nmatch("abc", "acb"), 0);
}

Test(nmatch, match_s2_star_s1_bszero)
{
    cr_assert_eq(nmatch("ab", "ab*"), 1);
}

Test(nmatch, match_s1_s2_one_star)
{
    cr_assert_eq(nmatch("abc", "a*"), 1);
}

Test(nmatch, match_s1_bszero_s2_star)
{
    cr_assert_eq(nmatch("abc", "ab*"), 1);
}

Test(nmatch, match_s1_s2_multiple_stars_but_result_is_one)
{
    cr_assert_eq(nmatch("abcdefghi", "ab*e*"), 1);
}

Test(nmatch, match_s1_stars_s2_double_stars_a)
{
    cr_assert_eq(nmatch("ab*defg", "ab**g"), 5);
}

Test(nmatch, match_s1_stars_s2_three_stars)
{
    cr_assert_eq(nmatch("abcdefghi", "ab***"), 36);
}

Test(nmatch, match_s1_normal_s2_stars)
{
    cr_assert_eq(nmatch("abcdefghi", "**"), 10);
}
