/*
** EPITECH PROJECT, 2019
** mylist.h
** File description:
** Linked list structure
*/

typedef struct linked_list
{
    void *data;
    struct linked_list *next;
} linked_list_t;
