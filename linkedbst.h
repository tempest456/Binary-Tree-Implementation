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
			left=right=nullptr;
			}
		
		Node(int info){
			data=info;
			left=right=nullptr;
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
		void preorderTraversal(){};
		void add(int data){};
		bool search (int data){};
		int max(){};
		
		//function overloading for this class
		void preorderTraversal(Node *root);
		void add(Node *root,int data);
		bool search(Node *root,int data);
		int max(Node *root);
};

#endif
