/*
** EPITECH PROJECT, 2019
** match.c
** File description:
** Check if 2 strings matchs
*/

int nmatch(char const *s1, char const *s2);

int n_case_s1_equal_s2(char const *s1, char const *s2)
{
    int nbr = 0;

    if (s1[0] == s2[0] && s1[0] == '\0')
        return (1);
    if (s1[0] == s2[0]) {
        nbr = (nmatch(&s1[1], &s2[1]));
        return nbr;
    }
    return (0);
}

int n_case_s2_equal_star(char const *s1, char const *s2)
{
    int nbr = 0;
    if (s2[0] == '*') {
        nbr = nmatch(&s1[0], &s2[1]);
        if (s1[0] != '\0')
            nbr = nbr + (nmatch(&s1[1], &s2[0]));
        if (nbr != 0) {
            return nbr;
        }
    }
    return 0;
}

int nmatch(char const *s1, char const *s2)
{
    int nbr = 0;

    nbr = n_case_s2_equal_star(&s1[0], &s2[0]);
    if (nbr != 0)
        return (nbr);
    nbr = n_case_s1_equal_s2(&s1[0], &s2[0]);
    if (nbr != 0)
        return (nbr);
    return (0);
}
