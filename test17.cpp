#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node* left;
	struct node *right;
};
void preOder(struct node *root){
	if(root!=NULL){
      cout<<root->data<<" ";
       preOder(root->left);
       preOder(root->right);
}	}
void postOder(struct node *root){
	if(root!=NULL){
		postOder(root->left);
		postOder(root->right);
		cout<<root->data<<" ";
	}

}
void inOder(struct node *root){
	if(root!=NULL){
		inOder(root->left);
		cout<<root->data<<" ";
		inOder(root->right);
	}
}
struct node *createNode(int data){
	 struct node *n;
	 n=(struct node *)malloc(sizeof(struct node));
	 n->data=data;
	 n->left=NULL;
	 n->right=NULL;
	 return n;
}
int main(){
	struct node *p=createNode(4);
	struct node *p1=createNode(3);
	struct node *p2=createNode(6);
	struct node *p3=createNode(5);
	struct node *p4=createNode(8);
	struct node *p5=createNode(2);
	struct node *p6=createNode(9);
	
	
	p->left=p1;
	p->right=p2;
	p1->left=p3;
	p1->right=p4;
	p2->left=p5;
	p2->right=p6;
	
	cout<<"PreOder Traversal"<<endl;
     preOder(p);
     cout<<endl;
   cout<<"PostOder Traversal"<<endl;
     postOder(p);
     cout<<endl;
     cout<<"InOder Traversal"<<endl;
     inOder(p);
	
}
