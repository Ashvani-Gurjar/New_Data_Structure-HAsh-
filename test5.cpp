#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
void Traversal(struct Node * head){
	struct Node *ptr=head;
	while(ptr!=NULL){
		printf("Element %d\n",ptr->data);
		ptr=ptr->next;
		
	}
}
struct Node * Insertion(struct Node *head,int data){
	struct Node * ptr=(struct Node *)malloc(sizeof(struct Node));
	ptr->data=data;
	ptr->next=head;
	return ptr;
}
struct Node* InsertionAtIndex(struct Node *head,int data,int index){
	struct Node * ptr=(struct Node *)malloc(sizeof(struct Node));
	struct Node *p=head;
	int i=0;
	while(i!=index-1){
		p=p->next;
		i++;
	}
	ptr->data=data;
	ptr->next=p->next;
	p->next=ptr;
	return head;
}
struct Node *InsertionEnd(struct Node * head,int data){
	struct Node * ptr=(struct Node *)malloc(sizeof(struct Node));
	struct Node * p=head;
	while(p->next!=NULL){
		p=p->next;
	}
	ptr->data=data;
	p->next=ptr;
	ptr->next=NULL;
	return head;
}
struct Node *InsertionNode(struct Node* head,int data,struct Node * preNode){
	struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
	ptr->data=data;
	ptr->next=preNode->next;
	preNode->next=ptr;
	return head;
	
	
}
struct Node* DeletionFirst(struct Node * head){
	struct Node *ptr=head;
	head=head->next;
	free(ptr);
	return head;
}
struct Node * DeletionIndex(struct Node *head,int index){
	struct Node* p=head;
	struct Node *q=head->next;
	for(int i=0;i<index-1;i++){
		p=p->next;
		q=q->next;
	}
	p->next=q->next;
	free(q);
	return head;
}
struct Node * DeletionEnd(struct Node *head){
	struct Node *p=head;
	struct Node *q=head->next;
	while(q->next!=NULL){
		p=p->next;
		q=q->next;
	}
	p->next=NULL;
	free(q);
	return head;
}
struct Node * DeletionAtNode(struct Node *head,int value){
	struct Node *p=head;
	struct Node *q=head->next;
	while(q->data!=value && q->next!=NULL){
		p=p->next;
		q=q->next;
	}
	if(q->data==value){
		p->next=q->next;
		free(q);
	}
	
	return head;
}


int main(){
	
	struct Node * head;
	struct Node * second;
	struct Node * third;
	struct Node * fourth;
	
	head=(struct Node *)malloc(sizeof(struct Node));
	second=(struct Node *)malloc(sizeof(struct Node));
	third=(struct Node *)malloc(sizeof(struct Node));
	fourth=(struct Node *)malloc(sizeof(struct Node));
	
	head->data=12;
	head->next=second;
	second->data=23;
	second->next=third;
	third->data=34;
	third->next=fourth;
	fourth->data=45;
	fourth->next=NULL;
	
	Traversal(head);
//	head=Insertion(head,88);
//  head =InsertionAtIndex(head,88,2);
//    head=InsertionEnd(head,88); 
//    head=InsertionNode(head,88,second); 
//   head= DeletionFirst(head);
//   head=DeletionIndex(head,2);
//   head=DeletionEnd(head);
   head=DeletionAtNode(head,34);
	printf("After Insertion\n");
	
	Traversal(head);
	return 0;
	
	
	
	
	
}
