#include<stdio.h>
#include<stdlib.h>
struct Node {
	int data;
	struct Node* next;
};
void Traversal(struct Node *head){
	struct Node *ptr=head;
	do{
	printf("Element %d\n",ptr->data);
	ptr=ptr->next;
	}while(ptr!=head);
}
struct Node *Insertion(struct Node * head,int data,int index){
	struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
	struct Node *p=head;
	int i=0;
	while(i!=index){
		p=p->next;
		i++;
	}
	ptr->data=data;
	ptr->next=p->next;
	p->next=ptr;
	return head;
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
	
	 head->data=12;
	 head->next=second;
	 second->data=22;
	 second->next=third;
	 third->data=34;
	 third->next=fourth;
	 fourth->data=66;
	 fourth->next=head;
	 
	 head=Insertion(head,88,2);
	 printf("After Insertion\n");
	  Traversal(head);
	  
	  
}
