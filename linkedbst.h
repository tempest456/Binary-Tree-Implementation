#ifndef LINKEDBST_H
#define LINKEDBST_H

#include "binarytree.h"

class Node
{
	private:
		int data;
		Node *left;
		Node *right;
		friend class LinkedBST;

	public:
		Node(){
			data=0;
			left=right=NULL;
			}

		Node(int info){
			data=info;
			left=right=NULL;
			}

		~Node(){}
};

class LinkedBST : public BinarySearchTree
{
     public:
		Node root;

		LinkedBST();
		~LinkedBST();

		//abstract class functions
		void preorderTraversal(){}
		void inorderTraversal(){}
		void add(int data){}
		bool search (int data){}
		int max(){}
		int min(){}
		void remove(int data){}
		
		//function overloading for this class
		void preorderTraversal(Node *root);
		void inorderTraversal(Node *root);
		void add(Node *root,int data);
		bool search(Node *root,int data);
		int max(Node *root);
		int min(Node *root);
		void remove(Node *root,int data);
};

#endif
