#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node* left;
	struct node *right;
};
struct node *createNode(int data){
	 struct node *n;
	 n=(struct node *)malloc(sizeof(struct node));
	 n->data=data;
	 n->left=NULL;
	 n->right=NULL;
	 return n;
}
int main(){
	struct node *p;
	struct node *p1;
	struct node *p2;
	struct node *p3;
	struct node *p4;
	struct node *p5;
	struct node *p6;
	
	
	p->left=p1;
	p->right=p2;
	p1->left=p3;
	p1->right=p4;
	p2->left=p5;
	p2->right=p6;
	
}
