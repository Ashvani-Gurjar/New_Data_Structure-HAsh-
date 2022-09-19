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
struct Node * DeletionFirst(struct Node *head){
	struct Node * ptr = (struct Node*)malloc(sizeof(struct Node));
	head=head->next;
	free(ptr);
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
	  printf("Befor Deletion\n");
	  Traversal(head);
	  head=DeletionFirst(head);
	  printf("After Deletion\n");
	  Traversal(head);
	  return 0;

	  
	  
	  
}
