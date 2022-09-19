#include<stdio.h>
#include<stdlib.h>
struct stack {
	int size;
	int top;
	char *arr;
};
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
	else {
		return 0;
	}
}
void push(struct stack *ptr,int data){
	if(isFull(ptr)){
		printf("Stack Overflow");
	}
	else{
	  ptr->top++;
	  ptr->arr[ptr->top]=data;	
	}
}
char pop(struct stack *ptr){
	if(isEmpty(ptr)){
		printf("Stack Underflow");
	}
	else {
	 char data= ptr->arr[ptr->top];
	 ptr->top--;
	 return data;
	}
}
int parenthesisMatch(char * exp){
	struct stack*sp;
	sp->size=100;
	sp->top=-1;
	sp->arr=(char *)malloc (sp->size *sizeof(char));
	
	for(int i=0;exp[i]!='\0';i++){
		if(exp[i]=='('){
			push(sp,'(');
		}
		else if(exp[i]==')'){
		  if(isEmpty(sp)){
		  	return 0;
		  }
		  else{
		  	  pop(sp);
		  }
		}}
		  if(isEmpty(sp)){
		  	return 1;
		  }
		  else {
		  	return 0;
		  }
	
}
int main(){
	char * exp="8*(a9()9)";
	if(parenthesisMatch(exp)){
		printf("The parenthesis is matched");
	}
	else{
		printf("The parenthesis is not matched");
	}
	return 0;
}






