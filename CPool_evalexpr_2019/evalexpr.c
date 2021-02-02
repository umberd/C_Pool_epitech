/*
** EPITECH PROJECT, 2019
** my_evalexpr.c
** File description:
** parsing of operations
*/

#include <unistd.h>
#include <stdlib.h>
#include "./include/my.h"

int eval_expr_two(char **str, int priority);
int eval_expr_prio_five(char **str, int result);

int number(char **str)
{
    int result;

    if (*(*str + 1) == '(')
        return 0;
    result = my_getnbr(*str);
    while (*str[0] == '-' || *str[0] == '+')
        *str = *str + 1;
    for (int i = 0; *str[0] >= '0' && *str[0] <= '9'; i++) {
        *str = *str + 1;
    }
    return result;
}

int eval_expr_prio_four(char **str, int result, int priority)
{
    while (((**str == '*' || **str == '/' || **str == '%') && priority <= 4) ||
        **str == '(' || (**str == '+' && priority <= 2) ||
        (**str == '-' && priority <= 2) || (**str == '-' && *(*str+1) == '(')) {
        if (**str == '*' || **str == '/' || **str == '%')
            result = eval_expr_prio_five(str, result);
        if (**str == '(') {
            *str = *str + 1;
            result = eval_expr_two(str, 0);
        }
        if ((**str == '+' && priority <= 2)) {
            *str = *str + 1;
            result += eval_expr_two(str, 4);
        }
        if ((**str == '-' && priority <= 2) ||
            (**str == '-' && *(*str + 1) == '(')) {
            *str = *str + 1;
            result -= eval_expr_two(str, 4);
        }
    }
    return result;
}

int eval_expr_prio_five(char **str, int result)
{
    if (**str == '*') {
        *str = *str + 1;
        result *= eval_expr_two(str, 6);
    }
    if (**str == '/') {
        *str = *str + 1;
        result /= eval_expr_two(str, 6);
    }
    if (**str == '%') {
        *str = *str + 1;
        result %= eval_expr_two(str, 6);
    }
    return (result);
}

int eval_expr_two(char **str, int priority)
{
    int result = number(str);
    result = eval_expr_prio_four(str, result, priority);
    if ((**str == ')') && priority == 0) {
        *str = *str + 1;
    }
    return result;
}

int eval_expr(char const *str)
{
    int result = 0;
    char *cpy = NULL;
    char *point = NULL;

    if (str != NULL) {
        cpy = my_strdup(str);
        point = cpy;
        result = eval_expr_two(&cpy, 1);
    }
    if (point != NULL)
        free(point);
    return result;
}
