/*
** EPITECH PROJECT, 2019
** my_delete_node.c
** File description:
** delete a node given
*/

#include <stdlib.h>
#include "./include/mylist.h"

int my_delete_this_node(linked_list_t *to_delete, linked_list_t *prev)
{
    if (to_delete->next) {
        prev->next = to_delete->next;
        to_delete->next = NULL;
    }
    else
        prev->next = NULL;
    if (to_delete != NULL) {
        free(to_delete);
        to_delete = NULL;
    }
    return 0;
}

int my_delete_nodes(linked_list_t **begin, void const *data_ref,
                    int (*cmp)())
{
    linked_list_t *list = *begin;
    linked_list_t *tmp = list;

    while (cmp(list->data, data_ref) == 0) {
        if (list->next) {
            *begin = list->next;
            list = list->next;
        } else {
            *begin = NULL;
            return 0;
        }
    }
    while (list->next != NULL) {
        tmp = list->next;
        if (cmp(tmp->data, data_ref) == 0) {
            my_delete_this_node(tmp, list);
            tmp = list;
        } else
            list = list->next;
    }
    return 0;
}
