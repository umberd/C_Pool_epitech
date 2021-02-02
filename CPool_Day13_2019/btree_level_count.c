/*
** EPITECH PROJECT, 2019
** btree_level_count
** File description:
** Count btree levels
*/

#include <unistd.h>
#include "./include/btree.h"

size_t btree_level_count(btree_t const *root)
{
    size_t left;
    size_t right;

    if (root == NULL)
        return 0;
    else {
        left = btree_level_count(root->left);
        right = btree_level_count(root->right);
        if (left > right)
            return (1 + left);
        else
            return (1 + right);
    }
}
