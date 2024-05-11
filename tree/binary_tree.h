#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int val;
    struct Node* parent;
    struct Node* left;
    struct Node* right;
};
