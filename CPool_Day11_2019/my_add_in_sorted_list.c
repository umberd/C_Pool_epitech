/*
** EPITECH PROJECT, 2019
** my_add_in_sorted_list
** File description:
** Add in array an elem in the sorted list
*/

#include <stdlib.h>
#include "./include/mylist.h"

linked_list_t *my_add_in_sorted_list_add(void *data, linked_list_t *next)
{
    linked_list_t *list = NULL;

    list = malloc(sizeof(linked_list_t *));
    list->data = data;
    list->next = next;
    return list;
}

void my_add_in_sorted_list(linked_list_t **begin, void *data, int (*cmp)())
{
    linked_list_t *list = *begin;
    void *temp = NULL;

    if (list == NULL) {
        *begin = my_add_in_sorted_list_add(data, NULL);
        return;
    }
    if (cmp(data, list->data) > 0)
        if (list->next != NULL)
            my_add_in_sorted_list(&list->next, data, cmp);
        else
            list->next = my_add_in_sorted_list_add(data, NULL);
    else {
        temp = list->data;
        list->data = data;
        list->next = my_add_in_sorted_list_add(temp, list->next);
    }
}
