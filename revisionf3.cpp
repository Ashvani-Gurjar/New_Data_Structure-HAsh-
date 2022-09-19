#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct stack {
	int size;
	int top;
	char * arr;
};
int stacktop(struct stack *ptr){
	return ptr->arr[ptr->top];
}
int isEmpty(struct stack * ptr){
	if(ptr->top==-1){
		return -1;
	}
	return 0;
}
int isFull(struct stack * ptr){
	if(ptr->top==ptr->size-1){
		return -1;
	}
	return 0;
}
void push(struct stack *ptr,int val){
	if(isFull(ptr)){
		printf("struct overfull");
	}
	else{
		ptr->top++;
		ptr->arr[ptr->top]=val;
		
	}
}
int pop(struct stack *ptr){
	if(isEmpty(ptr)){
		printf("strcut underflow");
	}
	else{
	 char val=ptr->arr[ptr->top];
	 ptr->top--;
	 return val;
	}
}
int isoperator(char ch){
	if(ch=='*'|| ch=='/'|| ch=='+'||ch=='-'){
		return 1;
	}
	return 0;
}
int precedence(char ch){
	if(ch=='*'||ch=='/'){
		return 3;
	}
	if(ch=='-'||ch=='+'){
		return 2;
	}
	return 0;
	
}
char* Infixtoprefix(char * infix){
        struct stack * sp=(struct stack *)malloc(sizeof(struct stack));
		sp->size=100;
		sp->top=-1;
		sp->arr=(char *)malloc(sp->size* sizeof(char)) ;
char* postfix =(char *)malloc(strlen(infix)+1*sizeof(char));
   int i=0;
   int j=0;	
		while(infix[i]!='\0'){
		if(!isoperator(infix[i])){
			postfix[j]=infix[i];
			i++;
			j++;
		}
		else{
			if(precedence(infix[i])>precedence(stacktop(sp))){
				push(sp,infix[i]);
				i++;
			}
			else{
				postfix[j]=pop(sp);
				j++;
			}
		}
			}
	   while(!isEmpty(sp)){
	   	postfix[j]=pop(sp);
	   	j++;
	   }
	   postfix[j]='\0';
	   return postfix;
		
}
int main(){
	char * infix = "x-y/z-k*d";
   printf("Postfix is %s ",Infixtoprefix(infix));
}
