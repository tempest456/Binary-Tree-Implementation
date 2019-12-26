#ifndef LINKED_H
#define LINKED_H

#include

class Node
{
    public:
    int data;
    Node *left;
    Node *right;
}

class linkedBST : public BinarySearchTree
{
    Node *root;
    public:
        void preorderTraversal();
        void add(int data);
        bool search (int data);
};

#endif
