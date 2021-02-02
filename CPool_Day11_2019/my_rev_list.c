/*
** EPITECH PROJECT, 2019
** my_rev_list.c
** File description:
** rev a linked list
*/

#include "./include/mylist.h"

void my_rev_list(linked_list_t **begin)
{
    linked_list_t *swap = 0;
    linked_list_t *swap2 = 0;
    linked_list_t *list = *begin;

    while (list != 0) {
        swap = list->next;
        list->next = swap2;
        swap2 = list;
        list = swap;
    }
    *begin = swap2;
}
