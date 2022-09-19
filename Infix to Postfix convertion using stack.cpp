#include<stdio.h>
#include<string.h>
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
int StackTop(struct stack *ptr){
   int data=ptr->arr[ptr->top];
   return data;
}
void push(struct stack *ptr,int data){
	if(isFull(ptr)){
		printf("Stack Overflow\n");
	}
	else{
	  ptr->top++;
	  ptr->arr[ptr->top]=data;	
	}
}
char pop(struct stack *ptr){
	if(isEmpty(ptr)){
		printf("Stack Underflow\n");
	}
	else {
	 char data= ptr->arr[ptr->top];
	 ptr->top--;
	 return data;
	}
}
int precedence(char ch){
if(ch=='*' || ch=='/')
{
	return 3;
}
else if(ch=='+'||ch=='-'){
	return 2;
}
else{
	return 0;
}}
int isOperator(char ch){
	if(ch=='+'|| ch=='-'||ch=='*'||ch=='/'){
		return 1;
	}
	else{
		return 0;
	}
}
char * infixTopostfix(char * infix){
	struct stack*sp=(struct stack *)malloc(sizeof(struct stack));
	sp->size=100;
	sp->top=-1;
	sp->arr=(char *)malloc (sp->size *sizeof(char));
	char* postfix=(char*)malloc((strlen(infix)+1)*sizeof(char));
	int i=0;
	int j=0;
	while(infix[i]!='\0'){
		if(!isOperator(infix[i])){
			postfix[j]=infix[i];
			j++;
			i++;
		}
	
	else{
		if(precedence(infix[i])>precedence(StackTop(sp))){
			push(sp,infix[i]);
			i++;
		}
		else{
			postfix[j]=pop(sp);
			j++;
		}
	}}
  while(!isEmpty(sp)){
  	postfix[j]=pop(sp);
  	j++;
  }
  postfix[j]='\0';
  return postfix;
}
int main(){
	char * infix="x-y/z-k*d";
	printf("postfix is %s ",infixTopostfix(infix));
	
	return 0;
}






