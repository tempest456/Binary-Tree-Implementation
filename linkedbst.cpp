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

void LinkedBST::removebst(Node *root,int keytoDelete)
{
	/*
	if (!search(root,dlt))
	{
		cout<<"No node found to delete"<<endl;
		return;
	}

	else
	{
		if(dlt<root->data)
		{
			removebst(root->left,dlt);
		}
		else if (dlt>root->data)
		{
			removebst(root->right,dlt);
		}
		else
		{
			if(root->left==NULL)
			{
				Node *temp=new Node();
				temp=root->right;
				root->data=temp->data;
				root->right=temp->right;
				delete temp;
				return;
			}
			
			else if(root->right==NULL)
			{
				Node *temp=new Node();
				temp=root->left;
				root->data=temp->data;
				root->left=temp->left;
				delete temp;
				return;
			}
			
			else
			{
				Node *temp=new Node();
				temp=root;
				root->data=temp->data;
				root->left=temp->left;
				delete temp;
				return;
			}
		}
	}
	*/
	int dat;
    if(root==NULL){
        cout<<"tree is empty"<<endl;
        return;
    }
    if(keytoDelete<root->data){
        Node* temp=new Node();
        temp=root->left;
        if(root->left->data==keytoDelete && root->left->left==NULL && root->left->right==NULL){
            root->left=NULL;
        }
        removebst(temp,keytoDelete);
        return;
    }
    else if(keytoDelete>root->data){
        Node* temp=new Node();
        temp=root->right;
        if(root->right->data==keytoDelete && root->right->left==NULL && root->right->right==NULL){
            root->right=NULL;
        }
        removebst(temp,keytoDelete);
        return;
    }
    else{
        if(root->left==NULL && root->right==NULL){
            delete root;
            root=NULL;
            return;
        }
        else if(root->left==NULL){
            Node* temp=new Node();
            temp=root->right;
            root->data=root->right->data;
            root->right=root->right->right;
            delete temp;
            return;
        }
        else if(root->right==NULL){
            Node* temp=new Node();
            temp=root->left;
            root->data=root->left->data;
            root->left=root->left->left;
            delete temp;
            return;
        }
        else{
            Node* nodetoDelete=new Node();
            nodetoDelete=root;
            Node* newNode=new Node();
            newNode=root->left;
            while(newNode->right!=NULL){
                newNode=newNode->right;
            }
            dat=newNode->data;
            removebst(nodetoDelete,newNode->data);
            root->data=dat;
            return;
        }
    }
}
