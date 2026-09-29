// binary tree -->> each node at most 2 child(left and right)

//https://www.geeksforgeeks.org/dsa/introduction-to-binary-tree/

// https://media.geeksforgeeks.org/wp-content/uploads/20251004163900292480/2-1.webp

#include <stdlib.h>

// node structure of binary tree

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};


// method for  creating node
struct Node* newnode(int item){
    struct Node* temp= (struct Node*)malloc(sizeof(struct Node));
    temp->data=item;
    temp->left=temp->right=NULL;
    return temp;
}

// Binary Tree types:
// 1. BST
// 2. Binary INdexed Tree (Fenwick Tree)
// 3. Balanced Binary Tree