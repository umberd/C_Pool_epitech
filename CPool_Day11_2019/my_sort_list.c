/*
** EPITECH PROJECT, 2019
** my_sort_list.c
** File description:
** Sort a list in ascending order bubble Sort
*/

#include <stdlib.h>
#include "./include/mylist.h"

int my_list_size(linked_list_t const *begin);

void my_sort_list_swap(linked_list_t *list, int (*cmp)())
{
    void *swap = NULL;

    if (cmp(list->data, list->next->data) > 0) {
        swap = list->data;
        list->data = list->next->data;
        list->next->data = swap;
    }
}

void my_sort_list(linked_list_t **begin, int (*cmp)())
{
    linked_list_t *list1 = *begin;
    linked_list_t *list2 = *begin;
    int len = my_list_size(list1);

    for (int i = 0; i < len - 1; i++) {
        list2 = list1;
        for (int j = 0; j < len - i - 1; j++) {
            my_sort_list_swap(list2, cmp);
            list2 = list2->next;
        }
    }
}
