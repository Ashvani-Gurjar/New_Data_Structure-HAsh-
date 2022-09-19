#include<stdio.h>
#include<stdlib.h>
struct Node {
	int data;
	struct Node * next;
};
void Traversal(struct Node * ptr ){
	while(ptr!=NULL)
	{
		printf("Element %d\n",ptr->data);
	    ptr=ptr->next;
	}
}
struct Node * InsertionAfterNode(struct Node *head,struct Node * preNode,int data){
	struct Node * ptr = (struct Node*)malloc(sizeof(struct Node));
	ptr->data=data;
	ptr->next=preNode->next;
	preNode->next=ptr;
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
	  fourth->next=NULL;
	  printf("Befor Traversal\n");
	  Traversal(head);
	  head=InsertionAfterNode(head,second,88);
	  printf("After Traversal\n");
	  Traversal(head);
	  return 0;

	  
	  
	  
}
