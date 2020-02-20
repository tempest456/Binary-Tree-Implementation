#include<iostream>
using namespace std;
#include "linkedbst.cpp"

int main()
{
    LinkedBST l;
    l.add(&l.root,3);
    l.add(&l.root,31);
    l.add(&l.root,23);
    l.add(&l.root,13);
    l.add(&l.root,8);
    l.add(&l.root,1);
    
    cout<<"preorder traversal:\n";
    l.preorderTraversal(&l.root);
    cout<<endl;
    
    l.add(&l.root,7);
    l.add(&l.root,5);
    l.add(&l.root,33);
    l.add(&l.root,39);
    l.add(&l.root,80);
    l.add(&l.root,12);
    
    cout<<"preorder traversal:\n";
    l.inorderTraversal(&l.root);
    cout<<endl;
    
    int data=534564;
    if(l.search(&l.root,data))
		cout<<data<<" Found"<<endl;
	else
		cout<<data<<" not found"<<endl;

	cout<<l.max(&l.root)<<endl;
	cout<<l.min(&l.root)<<endl;
	
	l.removebst(&l.root,1);
	l.removebst(&l.root,80);
	cout<<"preorder traversal:\n";
    l.inorderTraversal(&l.root);
    cout<<endl;
	
	return 0;
}
