// This program is created by Abdul Samad 
// Getting started with BST (Binary Search Tree)

#include <iostream>
using namespace std;

class tNode
{
public:
    int data;
    tNode * Left;
    tNode * Right;
    //tNode * Parent;
    };
class BST{
	tNode *root;
	public:
		BST(){
			root=Null;
		}

node* insert(int x, node* t)
    {
        if(t == NULL)
        {
            t = new node;
            t->data = x;
            t->left = t->right = NULL;
        }
        else if(x < t->data)
            t->left = insert(x, t->left);
        else if(x > t->data)
            t->right = insert(x, t->right);
        return t;
    }

tNode search(int d, tNode *t=root){
	if(t==Null)
	return 0;
	else if(t->data==d)
	return t;
	else{
		if(t->data<d)
		search(d,t->right);
		else
		search(d,t->left);
	}
}
int minimum(tNode *t=root){
	if(t==Null)
	return 0;
	else if(t->left==NUll)
	return 1;
	else{
		minimum(t->left);
	}
}
	int maximum(tNode *t=root){
	if(t==Null)
	return 0;
	else if(t->right==NUll)
	return 1;
	else{
		maximum(t->right);
	}
}
};
int main(){
	BST b;
	b.root=b.insert(3, b.root);
	b.insert(1, b.root);
	b.insert(7, b.root);
	b.insert(1, b.root);
	b.insert(4, b.root);
	b.insert(2, b.root);
	b.insert(0, b.root);
	b.test();

	return 0;
	

}
