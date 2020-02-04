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

void LinkedBST::inorderTraversal(Node *root)
{
	if(!root)
		return;
	
	inorderTraversal(root->left);

	cout<<root->data<<"\t";
	
	inorderTraversal(root->right);
	
}

int LinkedBST::max(Node *root)
{
    if(root->data==0)
    {
        cout<<"Null Tree"<<endl;
    }
    else if(root->right==NULL)
    {
        return root->data;
	}
	else
		max(root->right);
}

    
int LinkedBST::min(Node *root)
{
    if(root->data==0)
    {
        cout<<"Null Tree"<<endl;
    }
    else if(root->left==NULL)
    {
        return root->data;
	}
	else
		min(root->left);
}

void LinkedBST::remove(Node *root,int data)
{
	if (!search(&root,data))
	{
		cout<<"No node to remove"<<endl;
	}

	else
	{
		if(root->data==data)
		{
			
		}
	}
}
