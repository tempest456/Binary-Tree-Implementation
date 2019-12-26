#ifndef LINKED_H
#define LINKED_H

#include "binarytree.h"

class Node
{
    public:
    int data;
    Node *left;
    Node *right;
}

class LinkedBST : public BinarySearchTree
{
    Node *root;
    public:
        LinkedBST();
        ~LinkedBST();
        void preorderTraversal();
        void add(int data);
        bool search (int data);
};

#endif
