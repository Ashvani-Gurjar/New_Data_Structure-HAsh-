#include<stdio.h>
#include<stdlib.h>
struct Node {
	int data;
	struct Node * next;
};
void Traversal(struct Node * head ){
	struct Node*ptr=head;
	do
	{
		printf("Element %d\n",ptr->data);
	    ptr=ptr->next;
	}while(ptr!=head);
}
struct Node * Insertion(struct Node *head,int data){
	struct Node * ptr=(struct Node *)malloc (sizeof(struct Node ));
	ptr->data=data;
	struct Node * p= head->next;
	while(p->next!=head){
		p=p->next;
	}
	p->next=ptr;
	ptr->next=head;
	head=ptr;
	return head;
}

int main(){
	  struct Node *head;
	  struct Node *second;
	  struct Node *third;
	  struct Node *fourth;
	  
	  head=(struct Node*)malloc(sizeof(struct Node));
	  second=(struct Node*)malloc(sizeof(struct Node));
	  third=(struct Node*)malloc(sizeof(struct Node));
	  fourth=(struct Node*)malloc(sizeof(struct Node));
	  
	  head->data=11;
	  head->next=second;
	  second->data=14;
	  second->next=third;
	  third->data=78;
	  third->next=fourth;
	  fourth->data=34;
	  fourth->next=head;
	  
	  Traversal(head);
	  head=Insertion(head,88);
	  printf("After Traversal\n");
//	  Traversal(head);
	  return 0;

	  
	  
	  
}
