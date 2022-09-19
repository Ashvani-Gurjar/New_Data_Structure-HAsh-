#include<stdio.h>
#include<stdlib.h>
struct Node {
	int data;
	struct Node* next;
	struct Node* prev;
};
void Traversal(struct Node *head){
	struct Node *ptr=head;
	while(ptr!=NULL){
	printf("Element %d\n",ptr->data);
	ptr=ptr->next;
	}
}
int main(){
	  struct Node * head;
	  struct Node * second;
	  struct Node * third ;
	  struct Node * fourth;
	  
	head=(struct Node *)malloc(sizeof(struct Node));
	second =(struct Node *)malloc(sizeof(struct Node));
	third=(struct Node *)malloc(sizeof(struct Node));
	fourth=(struct Node *)malloc(sizeof(struct Node));
	
	 head->data=99;
	 head->next=second;
	 head->prev=NULL;
	 second->data=27;
	 second->next=third;
	 second->prev=head;
	 third->data=34;
	 third->next=fourth;
	 third->prev=second;
	 fourth->data=66;
	 fourth->next=NULL;
	 fourth->prev=third;
	 
	printf("After Insertion\n");
	Traversal(head);
	  
	  
}
