#include<stdio.h>
#include<stdlib.h>
struct Node {
	int data;
	struct Node * next;
	struct Node * prev;
};
struct Node * f=NULL;
struct Node * r=NULL;

void Traversal(struct Node *ptr){
	while(ptr!=NULL){
		printf("Element %d\n",ptr->data);
		ptr=ptr->next;
	}
}
void enqueueR(int val){
	struct Node * ptr=(struct Node *)malloc(sizeof(struct Node));
    if(ptr==NULL){
    	printf("stack overflow");
	}
	else{
		struct Node *n;
		ptr->data=val;
		ptr->next=NULL;
		if(f==NULL){
			f=r=ptr;
		}
		else{
			r->next=ptr;
			r=ptr;
		}}}
int dequeueL(){
	if(r==NULL){
		printf("stack underflow");
	}
	else{
		struct Node * p=f;
	   f=f->next;
	   int val= p->data;
	   return val;	
	}
	}
int dequeueR(){
	if(r==NULL){
		printf("stack underflow");
	}
	else{
	struct Node * p=f;
	struct Node *q=f->next;
	while(f->next!=NULL){
		p=p->next;
		f=f->next;
	}
	int val=p->data;
    p->next=NULL;
    free(q);
	return val;
	
	}
}
int main(){
	enqueueR(54);
	enqueueR(24);
	enqueueR(84);
	enqueueR(94);
	Traversal(f);
	printf("Dequeueing element %d\n",dequeueL());
	printf("Dequeueing element %d\n",dequeueR());
	printf("Dequeueing element %d\n",dequeueR());
	Traversal(f);
}
