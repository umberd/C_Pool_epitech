/*
** EPITECH PROJECT, 2019
** my_str_isalpha.c
** File description:
** Is str contain just alpha char
*/

int my_str_isprintable(char const *str)
{
    int i = 0;

    if (str[i] == '\0')
        return 1;
    while (str[i] != '\0') {
        if (!(str[i] >= 32 && str[i] < 127))
            return 0;
        i++;
    }
    return 1;
}
