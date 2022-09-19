#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack {
	int size;
	int top;
	char * arr;
};
int isEmpty(struct stack *ptr){
	if(ptr->top==-1){
		return 1;
	}
	else{
		return 0;
	}
	
}
int stacktop(struct stack *ptr){
	return ptr->arr[ptr->top];
}
int isFull(struct stack *ptr){
	if(ptr->top==ptr->size-1){
		return 1;
	}
	else{
		return 0;
	}
}
void push(struct stack *ptr,int val){
	if(isFull(ptr)){
		printf("Stack Overflow");
	}
	else{
		ptr->top++;
		ptr->arr[ptr->top]=val;
	}
}
char pop (struct stack *ptr){
	if(isEmpty(ptr)){
		printf("Stack Underflow");
	}
	else {
	   char val= ptr->arr[ptr->top];
	   ptr->top--;
	   return val;
	}
} 
int precedence(char a){
	if(a=='*' || a=='/'){
		return 3;
	}
   else	if(a=='+' || a=='-'){
		return 2;
	}
	else{
	return 0;	
	}
}
int isOperator(char ch){
	if(ch=='+'|| ch=='-'||ch=='*'||ch=='/'){
		return 1;
	}
	else{
		return 0;
	}
}

char * parenthesisisMatch(char *exp){
	struct stack * sp=(struct stack *)malloc(sizeof(struct stack));
	sp->size=100;
	sp->top=-1;
	sp->arr=(char *)malloc(sp->size*sizeof(char));
	char * st=(char *)malloc(strlen(exp)+1*sizeof(char));
	int i=0;
	int j=0;
	while(exp[i]!='\0'){
		if(!isOperator(exp[i])){
			st[j]=exp[i];
			i++;
			j++;
		}
		else{
			if(precedence(exp[i])>precedence(stacktop(sp))){
				push(sp,exp[i]);
				i++;
			}
			else{
				st[j]=pop(sp);
				j++;
			}
		}}
		while(!isEmpty(sp)){
			st[j]=pop(sp);
			j++;
		}
		st[j]='\0';
        return st;
	}
		
int main(){
	char * exp= "x-y/z-k*d";
	  printf("Postfix is %s ",parenthesisisMatch(exp));
return 0;	
	
	}
