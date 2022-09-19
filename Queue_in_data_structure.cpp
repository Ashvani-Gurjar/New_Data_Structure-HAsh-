#include<stdio.h>
#include<stdlib.h>
struct queue{
	int size;
	int f;
	int r;
	int *arr;
};
int isEmpty(struct queue *ptr ){
	if(ptr->r==ptr->f ){
		return 1;
	}
	return 0;
}
int isFull(struct queue *ptr ){
	 if(ptr->r==ptr->size-1){
	 	return 1;
	 }
	 return 0;
}
void enqueue(struct queue *ptr,int val){
	if(isFull(ptr)){
		printf("Queue is overflow");
	}
	else{
		ptr->r++;
		ptr->arr[ptr->r]=val;
		printf("Enqueue element %d\n",val);
	}
}
int dequeue(struct queue *ptr){
	int val=-1;
	if(isEmpty(ptr)){
		printf("Queue is Underflow");
	}
	else{
   	 ptr->f++;
	 val=ptr->arr[ptr->f];
}
	return val;
}
int main(){
	struct queue * sp=(struct queue *)malloc(sizeof(struct queue));
	sp->size =4;
	sp->f=sp->r=-1;
	sp->arr=(int *)malloc(sp->size *sizeof(int ));
	
	enqueue(sp,34);
	enqueue(sp,44);
//	enqueue(sp,64);
	printf("Dequeuing element %d\n",dequeue(sp));
	printf("Dequeuing element %d\n",dequeue(sp));
	
	if(isEmpty(sp)){
		printf("Queue is empty");
	}
	if(isFull(sp)){
		printf("Queue is full");
	}
	return 0;
}










