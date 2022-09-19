#include<bits/stdc++.h>
struct Node{
	int data;
	struct Node* next;
};
void linkedlist(struct Node * ptr){
	while(ptr!=NULL){
	printf("Element %d\n ",ptr->data);
	ptr=ptr->next;
}}
struct Node * Insertion(struct Node * head,int data ){
	struct Node * ptr=(struct Node *)malloc(sizeof(struct Node));
	ptr->next=head;
	ptr->data=data;
	return ptr;
}
struct Node * InsertionAtIndex(struct Node * head,int data,int index ){
	struct Node* ptr=(struct Node*)malloc(sizeof(struct Node));
	struct Node *p =head;
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
int main(){
         struct Node * head;
         struct Node * first;
         struct Node * second;
         struct Node * third;
         struct Node * fourth;
         
        head=(struct Node*)malloc(sizeof(struct Node));
        first=(struct Node*)malloc(sizeof(struct Node));
        second=(struct Node*)malloc(sizeof(struct Node));
        third=(struct Node*)malloc(sizeof(struct Node));
        fourth=(struct Node*)malloc(sizeof(struct Node));

        head->data=11;
        head->next=first;
        first->data=22;
        first->next=second;
        second->data=33;
        second->next=third;
        third->data=55;
        third->next=fourth;
        fourth->data=44;
        fourth->next=NULL;
        
        linkedlist(head);
     head=InsertionAtIndex(head,122,3);
//       head= Insertion(head,56);
       printf("After Insertion of first");
       linkedlist(head);
        
        
        return 0;
}
