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
    
    if(l.search(&l.root,8))
		cout<<"Item Found"<<endl;
	else
		cout<<"Item not found"<<endl;

	cout<<l.max(&l.root)<<endl;
	cout<<l.min(&l.root)<<endl;
	
	return 0;
}
