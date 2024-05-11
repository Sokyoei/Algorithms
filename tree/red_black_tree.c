#include "red_black_tree.h"

Node* create_node(int val, Node* parent) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->val = val;
    new_node->parent = parent;
    new_node->left = NULL;
    new_node->right = NULL;
    new_node->color = red;
}

bool is_leaf(Node* node) {
    if (node->left == NULL && node->right == NULL) {
        return true;
    }
    return false;
}

int main(int argc, char const* argv[]) {
    return 0;
}
