#include<stdio.h>
#include<malloc.h>
struct node {
	int data;
	struct node * left;
	struct node  * right;
};
struct node * createNode ( int data ){
	struct node *p;
	p=(struct node*)malloc(sizeof(struct node));
	p->data=data;
	p->left=NULL;
	p->right=NULL;
	return p;
}

int main(){
	struct node *p;
	struct node *p1;
	struct node *p2;
	struct node *p3;
	struct node *p4;
	
//	 4
//  / \
//  5  3
//  / \  
// 7   6  
	
	
	
	
	
	p->left=p1;
	p->right=p2;
	p1->left=p3;
	p1->right=p4;
}
