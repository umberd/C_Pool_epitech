/*
** EPITECH PROJECT, 2019
** btree_create_node.c
** File description:
** create node in btree
*/

#include <unistd.h>
#include <stdlib.h>
#include "./include/btree.h"

btree_t *btree_create_node(void *item)
{
    btree_t *new = malloc(sizeof(btree_t *));

    new->item = item;
    new->left = NULL;
    new->right = NULL;
    return new;
}
