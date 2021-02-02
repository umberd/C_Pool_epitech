/*
** EPITECH PROJECT, 2019
** my_strcmp.c
** File description:
** Compare 2 strings and return <0, 0 or >0;
*/

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    while (s1[i] == s2[i] && s1[i] != '\0') {
        i++;
    }
    return s1[i] - s2[i];
}
