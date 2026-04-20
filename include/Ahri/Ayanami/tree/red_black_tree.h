#pragma once
#ifndef AHRI_AYANAMI_TREE_RED_BLACK_TREE_H
#define AHRI_AYANAMI_TREE_RED_BLACK_TREE_H

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct RBNode {
    int val;
    struct RBNode* parent;
    struct RBNode* left;
    struct RBNode* right;
    enum color { red, black } color;
} RBNode, *PRBNode;

RBNode* create_node(int val, RBNode* parent);
int remove_node(RBNode* node);
int delete_node(RBNode* node);
bool is_leaf(RBNode* node);

#endif  // !AHRI_AYANAMI_TREE_RED_BLACK_TREE_H
