#pragma once
#ifndef AHRI_AYANAMI_TREE_BINARY_TREE_H
#define AHRI_AYANAMI_TREE_BINARY_TREE_H

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct BNode {
    int val;
    struct BNode* parent;
    struct BNode* left;
    struct BNode* right;
} BNode, *PBNode;

#endif  // !AHRI_AYANAMI_TREE_BINARY_TREE_H
