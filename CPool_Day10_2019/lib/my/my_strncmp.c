/*
** EPITECH PROJECT, 2019
** my_strncmp.c
** File description:
** Compare 2 strings and return <0, 0 or >0 to n;
*/

int my_strncmp(char const *s1, char const *s2, int nb)
{
    int i = 0;

    if (nb == 0)
        return 0;
    while (s1[i] == s2[i] && s1[i] != '\0' && i < nb - 1) {
        i++;
    }
    return s1[i] - s2[i];
}
