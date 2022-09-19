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
int isBST(struct node * root){
 static	struct node * prev=NULL;
	if(root!=NULL){
		if(!isBST(root->left)){
			return 0;
		}
		if(prev!=NULL && root->data<=prev->data){
			return 0;
		}
		prev=root;
		return isBST(root->right);
	}
	else{
		return 1;
	}
}
int main(){
	struct node * p=createNode(6);
	struct node * p1=createNode(4);
	struct node * p2=createNode(8);
	struct node * p3=createNode(2);
	struct node * p4=createNode(5);
	struct node * p5=createNode(7);
	struct node * p6=createNode(10);
	
	p->left=p1;
	p->right=p2;
	p1->left=p3;
	p1->right=p4;
	p2->left=p5;
	p2->right=p6;
	
	printf("inOder Traversal in a tree\n");
	inOder(p);
	printf("\n");
	if(isBST(p)){
		printf("This Tree is Binary search tree");
	}
	else{
		printf("This Tree is not  a Binary search tree");
	}
	return 0;
	
}
