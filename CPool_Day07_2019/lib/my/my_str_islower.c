/*
** EPITECH PROJECT, 2019
** my_str_islower.c
** File description:
** Is str contain just alpha lower char
*/

int my_str_islower(char const *str)
{
    int i = 0;

    if (str[i] == '\0')
        return 1;
    while (str[i] != '\0') {
        if (!(str[i] >= 'a' && str[i] <= 'z'))
            return 0;
        i++;
    }
    return 1;
}
