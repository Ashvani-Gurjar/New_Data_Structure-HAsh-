#include<stdio.h>

int insertion(int arr[],int size,int element,int index){
	for(int i=size-1;i>=index;i--){
		arr[i+1]=arr[i];
	}
	arr[index]=element;
	return 1;
}
void display(int arr[],int size){
	for(int i=0;i<size;i++){
		printf(" %d",arr[i]);
	}
	printf("\n");
}

int main(){
	int  arr[100];
	int size,element,index;
	printf("Enter the size of array :");
	scanf("%d",&size);
	printf("Enter the element of array :");
	scanf("%d",&element);
	printf("Enter the index of array :");
	scanf("%d",&index);
	printf("Enter the values of array");
	for(int i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}

	insertion(arr,size,element,index);
	display(arr,size+1);
	return 0;
}
