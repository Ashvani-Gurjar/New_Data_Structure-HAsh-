#include<stdio.h>
int Deletion(int arr[],int size,int index){
	for(int i=index;i<size-1;i++){
		arr[i]=arr[i+1];
		
	}
}
void Display(int arr[],int size){
	for(int i=0;i<size;i++){
		printf(" %d",arr[i]);
	}
}
int main(){
	int  arr[100];
	int size,element,index;
	printf("Enter the size of array :");
	scanf("%d",&size);
	printf("Enter the index of array :");
	scanf("%d",&index);
	printf("Enter the values of array");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	Deletion(arr,size,index);
	Display(arr,size-1);
	return 0;
}
