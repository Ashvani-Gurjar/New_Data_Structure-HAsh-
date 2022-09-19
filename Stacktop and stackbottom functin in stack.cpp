#include<stdio.h>
#include<stdlib.h>
struct stack{
	int size;
	int top;
	int *arr;
};
int StackTop(struct stack *ptr){
   int data=ptr->arr[ptr->top];
   return data;
}
int StackBottom(struct stack *ptr){
	int data=ptr->arr[0];
	return data;
}
int peek(struct stack *ptr,int i){
	  int ans=ptr->top-i+1;
	  if(ans<0){
	  	printf("Not a valid position");
	  	return -1;
	  }
	  else {
	  	 return  ptr->arr[ans];
	  }
	 
	  
}
int isEmpty(struct stack *ptr){
	if(ptr->top==-1){
		return 1;
	}
	else {
		return 0;
	}
	
}
int isFull(struct stack *ptr){
	if(ptr->top==ptr->size-1){
		return 1;
	}
	else{
		return 0;
	}
}
void push(struct stack* ptr,int data){
	if(isFull(ptr)){
		printf("Stack overflow\n");
	}
	else {
		ptr->top++;
		ptr->arr[ptr->top]=data;
	}
}
int pop(struct stack* ptr){
	if(isEmpty(ptr)){
		printf("Stack underflow\n");
		return -1;
	
	}
	else{
		int data=ptr->arr[ptr->top];
		ptr->top--;
		return data;
	}
}

int main(){
	struct stack *sp=(struct stack *)malloc(sizeof(struct stack));
	sp->size=80;
	sp->top=-1;
	sp->arr=(int *)malloc(sp->size*sizeof(int ));
	  
	  push(sp,23);
	  push(sp,33);
	  push(sp,43);
	  push(sp,93);
	  push(sp,63);
    printf("The Top element in stack %d\n",StackTop(sp));
    printf("The Bottom element in stack %d\n",StackBottom(sp));
}
