#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int val;
    struct Node* parent;
    struct Node* left;
    struct Node* right;
    enum color { red, black } color;
} Node;

Node* create_node(int val, Node* parent);
int remove_node(Node* node);
int delete_node(Node* node);
bool is_leaf(Node* node);
