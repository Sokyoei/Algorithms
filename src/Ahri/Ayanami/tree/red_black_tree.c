#include "Ahri/Ayanami/tree/red_black_tree.h"

RBNode* create_node(int val, RBNode* parent) {
    RBNode* new_node = (RBNode*)malloc(sizeof(RBNode));
    new_node->val = val;
    new_node->parent = parent;
    new_node->left = NULL;
    new_node->right = NULL;
    new_node->color = red;
}

bool is_leaf(RBNode* node) {
    if (node->left == NULL && node->right == NULL) {
        return true;
    }
    return false;
}
