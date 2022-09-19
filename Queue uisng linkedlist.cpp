#include<stdio.h>
#include<stdlib.h>
struct Node {
	int data;
	struct Node *next;
};
struct Node * f=NULL;
struct Node * r=NULL;
void linkedlistTraversal(struct Node *ptr){
	while(ptr!=NULL){
		printf("Element %d\n",ptr->data);
		ptr=ptr->next;
	}
}
void enqueue(int val){
	struct Node *n =(struct Node *)malloc(sizeof(struct Node));
	if(n==NULL){
		printf("Queue is Full");
	}
	else{
		n->data=val;
		n->next=NULL;
		if(f==NULL){
			f=r=n;
		}
		else{
			r->next=n;
			r=n;
		}
	}
}
int dequeue(){
	int val=-1;
	struct Node *ptr=f;
	if(f==NULL){
		printf("Queue is empty\n");
	}
	else{
		f=f->next;
		val=ptr->data;
		free(ptr);
	}
	return val;
}

int main(){
	
//	linkedlistTraversal(f);
//	printf("Dequeueing element %d\n",dequeue());
	enqueue(34);
	enqueue(24);
	enqueue(64);
	enqueue(94);
	enqueue(14);
	linkedlistTraversal(f);
//	printf("Dequeueing element %d\n",dequeue());
//	printf("Dequeueing element %d\n",dequeue());
	printf("Dequeueing element %d\n",dequeue());
	
	return 0;
	
}









