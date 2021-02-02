/*
** EPITECH PROJECT, 2019
** my_strstr.c
** File description:
** Find str in a string
*/

int check_to_find_str(char *str, char const *to_find)
{
    for (int i = 0; to_find[i] != '\0'; i++) {
        if (str[i] != to_find[i])
            return (0);
        if (str[i] == '\0')
            return (0);
    }
    return 1;
}

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int found  = 0;

    if (to_find[0] == '\0')
        return str;
    while (str[i] != '\0' && found == 0) {
        if (str[i] == to_find[0])
            found = check_to_find_str(str + i, to_find);
        i++;
    }
    if (found == 1)
        return (str + i - 1);
    return (0);
}
