#include<iostream>
#include "linked.h"

LinkedBST::LinkedBST()
{
    root= NULL;
}

LinkedBST::~LinkedBST(){}

void LinkedBST::add(Node* root,int data)
{
    if (root==NULL)
    {
        root->data=data;
    }

    else
    {
        if (data > root->data)
        {
            if (root->right!=NULL)
            {
                add(root->right,data);
            }

            else
            {
                Node* newNode=new Node();
                newNode->data = data;
                root->right=newNode;
            }
        }

        else
        {
            if(root->left!=NULL)
            {
                add(root->left,data);
            }
            else
            {
                Node* newNode=new Node();
                newNode->data=data;
                root->left=newNode;
            }
            
        }
    }
}

