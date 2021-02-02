/*
** EPITECH PROJECT, 2019
** test_match.c
** File description:
** Unit Test of match
*/

#include <criterion/criterion.h>

int match(char *s1, char *s2);

Test(match, match_void_strings)
{
    cr_assert_eq(match("", ""), 1);
}

Test(match, match_s1_void_s2_not_void)
{
    cr_assert_eq(match("", "abc"), 0);
}

Test(match, match_s1_not_void_s2_void)
{
    cr_assert_eq(match("abc", ""), 0);
}

Test(match, match_s1_equal_s2)
{
    cr_assert_eq(match("abc", "abc"), 1);
}

Test(match, match_s1_s2_non_equal)
{
    cr_assert_eq(match("abc", "acb"), 0);
}

Test(match, match_s2_star_s1_bszero)
{
    cr_assert_eq(match("ab", "ab*"), 1);
}

Test(match, match_s1_s2_one_star)
{
    cr_assert_eq(match("abc", "a*"), 1);
}

Test(match, match_s1_last_letter_s2_star)
{
    cr_assert_eq(match("abc", "ab*"), 1);
}

Test(match, match_s1_s2_multiple_stars)
{
    cr_assert_eq(match("abcdefghi", "ab*e*"), 1);
}

Test(match, match_s1_stars_s2_stars)
{
    cr_assert_eq(match("ab*defg", "ab*"), 1);
}

Test(nmatch, match_s1_stars_s2_double_stars)
{
    cr_assert_eq(match("ab*defg", "ab**g"), 1);
}

Test(nmatch, match_s1_bs_zero_s2_stars_something)
{
    cr_assert_eq(match("ab", "ab*g"), 0);
}
