#include<stdio.h>
#include<malloc.h>
struct node {
	int data;
	struct node * left;
	struct node * right;
};
struct node *createNode (int data){
	struct node *p=(struct node *)malloc(sizeof(struct node));
	p->data=data;
	p->left=NULL;
	p->right=NULL;
}
void inOder(struct node * root){
	if(root!=NULL){
		inOder(root->left);
		printf("%d ",root->data);
		inOder(root->right);
		
	}
}
int main(){
	struct node * p=createNode(5);
	struct node * p1=createNode(6);
	struct node * p2=createNode(7);
	struct node * p3=createNode(8);
	struct node * p4=createNode(9);
	struct node * p5=createNode(11);
	struct node * p6=createNode(12);
	
	p->left=p1;
	p->right=p2;
	p1->left=p3;
	p1->right=p4;
	p2->left=p5;
	p2->right=p6;
	
	printf("PostOder Traversal in a tree\n");
	inOder(p);
	return 0;
	
}
