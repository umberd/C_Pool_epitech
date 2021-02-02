/*
** EPITECH PROJECT, 2019
** my_getnbr
** File description:
** convert a given number
*/

int dix_puissance(int dix_puissance_var);
int my_str_to_int(int len_a, int len_b, char const *str, int is_positive);
int my_check_is_int(char const *str, int is_pos, int len_a, int len_b);

int my_getnbr(char const *str)
{
    int i = 0;
    int is_positive = 1;
    int len_a = 0;
    int check;

    while (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-')
            is_positive = -is_positive;
        i++;
    }
    if (str[i] < '0' || str[i] > '9')
        return 0;
    for (i = i; str[i] == '0'; i++);
    len_a = i;
    for (i = i; str[i] >= '0' && str[i] <= '9'; i++);
    check = my_check_is_int(str, is_positive, len_a, i - 1);
    if (check == 0)
        return (my_str_to_int(len_a, i - 1, str, is_positive));
    return 0;
}

int my_check_is_int_limit(char const *str, int is_pos, int len_a, int len_b)
{
    char limit_Pos[10] = "2147483647";
    char limit_Neg[10] = "2147483648";

    for (int i = len_a; i <= len_b; i++) {
        if (str[i] > limit_Pos[i - len_a] && is_pos == 1)
            return (1);
        else if (str[i] > limit_Neg [i - len_a])
            return (1);
    }
    return 0;
}

int my_check_is_int(char const *str, int is_pos, int len_a, int len_b)
{
    if (len_b - len_a + 1 < 10)
        return (0);
    if (len_b - len_a + 1 == 10) {
        if (my_check_is_int_limit(str, is_pos, len_a, len_b) == 1)
            return 1;
    }
    else
        return 1;
    return 0;
}

int dix_puiss(int dix_puissance_var)
{
    int var = 1;

    for (int i = 0; i < dix_puissance_var; i++) {
        var = var * 10;
    }
    return var;
}

int my_str_to_int(int len_a, int len_b, char const *str, int is_positive)
{
    int dix_puissance_var = 0;
    int result = 0;

    for (int i = len_b; i >= len_a; i--) {
        if (i == len_a && is_positive < 0)
            result = -result - (str[i] - '0') * dix_puiss(dix_puissance_var);
        else
            result = result + (str[i] - '0') * dix_puiss(dix_puissance_var);
        dix_puissance_var++;
    }
    return (result);
}
