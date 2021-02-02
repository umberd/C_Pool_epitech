/*
** EPITECH PROJECT, 2019
** btree_insert_data.c
** File description:
** Insert data in btree
*/

#include <unistd.h>
#include "./include/btree.h"

void btree_insert_data(btree_t **root, void *item, int (*cmpf)())
{
    btree_t *my_tree = *root;

    if (my_tree == NULL) {
        my_tree = btree_create_node(item);
        *root = my_tree;
    } else {
        if (cmpf(item, my_tree->item) < 0)
            btree_insert_data(&my_tree->left, item, cmpf);
        if (cmpf(item, my_tree->item) >= 0)
            btree_insert_data(&my_tree->right, item, cmpf);
    }
}
