#include<stdio.h>
#include<stdlib.h>
struct Node {
	int data;
	struct Node * next;
};
int isEmpty(struct Node *top){
	if(top==NULL){
		return 1;
	}
	else{
		return 0;
	}
	
}
int isFull(struct Node *top){
	struct Node *p=(struct Node *)malloc(sizeof(struct Node));
	if(p==NULL){
		return 1;
	}
	else{
		return 0;
	}
}
struct Node *push(struct Node *top,int val){
	if(isFull(top)){
		printf("Stack Overflow");
	}
	else{
		struct Node *n=(struct Node *)malloc(sizeof(struct Node));
		 n->data=val;
		 n->next=top;
		 top=n;
		 return top;
	}
}
void Traversal(struct Node *top){
	while(top!=NULL){
		printf("Element of the Node is %d\n",top->data);
		top=top->next;
	}
}
int pop(struct Node ** top){
	if(isEmpty(*top)){
		printf("Stack Underflow");
	}
	else{
		struct Node *p=*top;
		 *top=(*top)->next;
		 int val=p->data;
		  free(p);
		  return val;
		
	}
}



int main(){
	struct Node * sp=NULL;
     sp=push(sp,44);
     sp=push(sp,64);
     sp=push(sp,84);
     sp=push(sp,24);
     sp=push(sp,94);
	
	
//	int element = pop(&sp);
//	printf("Element is %d\n",element );
	 Traversal(sp);
	
	return 0;
	 
}
