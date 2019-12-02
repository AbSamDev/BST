// This program is created by Abdul Samad 
// Getting started with BST (Binary Search Tree)

#include <iostream>
using namespace std;

class tNode
{
public:
    int data;
    tNode *left;
    tNode *right;
    };
class BST{
	public:
		tNode *root;
	public:
	
		BST(){
			root=NULL;
		}

tNode* insert(int x, tNode* t)
    {
        if(t == NULL)
        {
            t = new tNode;
            t->data = x;
            t->left = t->right = NULL;
        }
        else if(x < t->data)
            t->left = insert(x, t->left);
        else if(x > t->data)
            t->right = insert(x, t->right);
        return t;
    }

tNode *search(int d, tNode *t){
	if(t==NULL)
	return t;
	else if(t->data==d)
	return t;
	else{
		if(t->data<d)
		search(d,t->right);
		else
		search(d,t->left);
	}
}
int minimum(tNode *t){
	if(t==NULL)
	return 0;
	else if(t->left==NULL)
	return t->data;
	else{
		minimum(t->left);
	}
}
int maximum(tNode *t){
	if(t==NULL)
	  return 0;
	else if(t->right==NULL)
	  return t->data;
	else{
		maximum(t->right);
	}
}
void inOrder(tNode *t){
	if(t != NULL){
		inOrder(t->left);
		cout<<t->data<<" ";
		inOrder(t->right);
	}
}
void preOrder(tNode *t){
	if(t != NULL){
		cout<<t->data<<" ";
		preOrder(t->left);
		preOrder(t->right);
	}
}
void postOrder(tNode *t){
	if(t != NULL){
		postOrder(t->left);
		postOrder(t->right);
		cout<<t->data<<" ";
	}
}
void test(){
	cout<<root->data;
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
	b.insert(9, b.root);
	b.inOrder(b.root);
	cout<<endl;
	b.preOrder(b.root);
	cout<<endl;
	b.postOrder(b.root);
	cout<<endl;
    cout<<"max is:"<<b.maximum(b.root)<<endl;
    cout<<"min is:"<<b.minimum(b.root);
	return 0;
	

}
