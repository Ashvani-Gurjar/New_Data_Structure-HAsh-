#include<bits/stdc++.h>
using namespace std;
struct Node {
	int data;
	struct Node * next;
};
void Traversal(struct Node * ptr){
	while(ptr!=NULL){
		printf("Element %d\n",ptr->data);
		ptr=ptr->next;
	}
	}
struct Node * InsertionFirst(struct Node * head,int data){
	struct Node * ptr=(struct Node*)malloc(sizeof(struct Node));
	ptr->next=head;
	ptr->data=data;
	
	return ptr;
}
struct Node * InsertionAtIndex(struct Node * head,int data,int index){
	struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
	struct Node * p=head;
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
struct Node* InsertionAtEnd(struct Node * head,int data){
	struct Node* ptr=(struct Node *)malloc(sizeof(struct Node));
	
	struct Node *p=head;
	while(p->next!=NULL){
		p=p->next;
	}
	ptr->data=data;
	ptr->next=NULL;
	p->next=ptr;
	
	return head;
}
struct Node * InsertionAtNode(struct Node * head, struct Node * preNode ,int data){
	struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
	ptr->data=data;
	ptr->next=preNode->next;
	preNode->next=ptr;
	return head;
	
	
}


int main(){
	struct Node * head;
	struct Node * second;
	struct Node * third;
	struct Node * fourth;
	
	head=(struct Node *)malloc(sizeof(struct Node ));
	second=(struct Node *)malloc(sizeof(struct Node ));
	third=(struct Node *)malloc(sizeof(struct Node ));
	fourth=(struct Node *)malloc(sizeof(struct Node ));
	
	head->data=11;
	head->next=second;
	second->data=33;
	second->next=third;
	third->data=44;
	third->next=fourth;
	fourth->data=22;
	fourth->next=NULL;
	
	
	Traversal(head);
//    head=InsertionFirst(head,77);
//     head=InsertionAtIndex(head,77,2);
//    head=InsertionAtEnd(head,77);
head=InsertionAtNode(head,third,77);
	printf("Befor Insertion\n");
    Traversal(head);
	
	return 0;

	
}
