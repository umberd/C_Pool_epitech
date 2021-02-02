/*
** EPITECH PROJECT, 2019
** match.c
** File description:
** Check if 2 strings matchs
*/

int match(char const *s1, char const *s2);

int case_s1_equal_s2(char const *s1, char const *s2)
{
    if (s1[0] == s2[0] && s1[0] == '\0')
        return (1);
    else if (s1[0] == s2[0])
        return (match(&s1[1], &s2[1]));
    else
        return (0);
}

int case_s2_equal_star(char const *s1, char const *s2)
{
    if (s2[0] == '*') {
        if (match(&s1[0], &s2[1]) == 1)
            return (1);
        if (s1[0] != '\0')
            return (match(&s1[1], &s2[0]));
    }
    return 0;
}

int match(char const *s1, char const *s2)
{
    if (case_s2_equal_star(&s1[0], &s2[0]) == 1)
        return (1);
    else if (case_s1_equal_s2(&s1[0], &s2[0]) == 1)
        return (1);
    return (0);
}
