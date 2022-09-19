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
void preOder(struct node * root ){
     	if(root!=NULL){
		
		printf("%d ",root->data);
		preOder(root->left);
		preOder(root->right);
	}
}
int main(){
	struct node *p=createNode(4);
	struct node *p1=createNode(5);
	struct node *p2=createNode(3);;
	struct node *p3=createNode(7);;
	struct node *p4=createNode(6);;
	
//	 4
//  / \
//  5  3
//  / \  
// 7   6  
	
	
	
	
	
	p->left=p1;
	p->right=p2;
	p1->left=p3;
	p1->right=p4;
	printf("PreOder traversal of a Tree\n");
	preOder(p);
	return 0;
	
	
}
