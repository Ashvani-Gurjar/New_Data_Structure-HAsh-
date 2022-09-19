#include<stdio.h>
int searching(int arr[],int size ,int element){
	for(int i=0;i<size;i++)
	{
		if(arr[i]==element){
			return i;
			
		}
	}
	return -1;
}
int main(){
	int  arr[100]={2,3,4,5,6,7};
	
	int size=sizeof(arr)/sizeof(int);
	int element;
	printf("Enter the searching element of array :");
	scanf("%d",&element);
	
 int x=searching(arr,size,element);
	printf("The element %d was found at index %d\n  ",element,x+1);
	return 0;
}
