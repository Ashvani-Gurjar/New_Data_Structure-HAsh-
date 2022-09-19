#include<stdio.h>
#include<stdlib.h>
 struct stack{
 	int size;
 	int top;
 	int * arr;
 };
 
 int isEmpty(struct stack* ptr){
 	if(ptr->top== -1){
 		return 1;
	 }
 }
 int isFull(struct stack* ptr){
 	if(ptr->top == ptr->size-1){
 		return 1;
	 }
 }
 
 int main(){
 	struct stack *s;
 	s->size=80;
 	s->top=-1;
 	s->arr=(int *)malloc(s->size* sizeof(int));
 	printf("good ");
 	if(isEmpty(s)){
 		printf("The stack is emplty");
	 }
	else{
	    printf("The stack is not emplty");	
	} 
	return 0;
 }
