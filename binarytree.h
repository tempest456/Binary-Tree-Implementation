#ifndef BINARYTREE_H
#define BINARYTREE_H

class BinarySearchTree
{
    public:
        virtual void preorderTraversal()=0;
        virtual void add(int data)=0;
        virtual bool search (int data)=0;
};

#endif
