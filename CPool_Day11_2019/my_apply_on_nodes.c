/*
** EPITECH PROJECT, 2019
** my_apply_on_nodes.c
** File description:
** apply a dunction
*/

#include "./include/mylist.h"

int my_apply_on_nodes(linked_list_t *begin, int (*f)(void *))
{
    if (begin != 0) {
        (*f)(begin->data);
        my_apply_on_nodes(begin->next, f);
    }
    return 0;
}
