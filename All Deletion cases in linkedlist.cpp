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
struct Node * DeletionFirst(struct Node * head){
	struct Node *ptr=head;
	head=head->next;
	free(ptr);
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
    head=DeletionFirst(head);
	printf("After Deletion\n");
    Traversal(head);
	
	return 0;

	
}
