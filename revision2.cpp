#include<stdio.h>
#include<stdlib.h>
struct Node {
	int data;
	struct Node *next;
};
struct Node * sp=NULL;
int isempty(struct Node *ptr){
	if(ptr==NULL){
		return 1;
	}
	else{
		return 0;
	}
}
int isfull(struct Node *ptr){
	struct Node * p=(struct Node *)malloc(sizeof(struct Node));
	if(p==NULL){
		return 1;
	}
	else{
		return 0;	
	}

}
void Traversal(struct Node *ptr){
	while(ptr!=NULL){
		printf("Element of the stack is %d\n",ptr->data);
		  ptr=ptr->next;
	}
}
struct Node * push(struct Node * ptr,int val){
	if(isfull(ptr)){
		printf("Stack Overflow");
	}
	else{
		struct Node *n=(struct Node *)malloc(sizeof(struct Node));
		n->data=val;
		n->next=ptr;
		ptr=n;
		return ptr;
	}
}
int pop(struct Node * ptr){
	if(isempty(ptr)){
		printf("Stack Underflow");
	}
	else{
		struct Node * p=ptr;
		ptr=ptr->next;
		int val = p->data;
		free(p);
		 return val;
	}
}
int main(){
	
	sp=push(sp,34);
	sp=push(sp,44);
	sp=push(sp,64);
	sp=push(sp,94);
	sp=push(sp,74);
	
	int element = pop(sp);
	printf("Element a the stack is %d\n",element);
//	Traversal(sp);
	return 0;
}

