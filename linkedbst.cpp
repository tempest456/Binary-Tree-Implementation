#include<iostream>
using namespace std;
#include "linkedbst.h"

LinkedBST::LinkedBST(){}

LinkedBST::~LinkedBST(){}

void LinkedBST::add(Node *root,int data)
{
    if (root->data==0)
    {
        root->data=data;
    }

    else
    {
        if (data > root->data)
        {
            if (!root->right)
            {
			Node* newNode=new Node(data);
               root->right=newNode;
            }

            else
            {
               add(root->right,data);
            }
        }

        else
        {
            if(!root->left)
            {
			Node* newNode=new Node(data);
			root->left=newNode;
            }
            else
            {
               add(root->left,data);
            }
            
        }
    }
}

bool LinkedBST::search(Node *root,int searchItem)
{
	if(root->data==0)
	{
		cout<<"Null tree"<<endl;
		return 0;
	}
	else
	{
		Node *tempRoot=new Node();
		tempRoot=root;
		while(tempRoot)
		{
			if(searchItem>tempRoot->data)
				tempRoot=tempRoot->right;
			
			else if (searchItem<tempRoot->data)
				tempRoot=tempRoot->left;	
			
			else if (searchItem==tempRoot->data)
				return 1;
		}
	}
	return 0;
}

void LinkedBST::preorderTraversal(Node *root)
{
	if(!root)
		return;
	
	cout<<root->data<<"\t";
	
	preorderTraversal(root->left);
	
	preorderTraversal(root->right);
	
}



