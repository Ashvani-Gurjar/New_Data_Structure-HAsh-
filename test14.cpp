#include<stdio.h>
void Traversal(int *arr,int n){
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
void insertionsort(int *arr,int n){
   int key,j;
   for(int i=1;i<n;i++){
    	key=arr[i];
         j=i-1;
         while(j>=0 && arr[j]>key){
         	arr[j+1]=arr[j];
         	j--;
		 }
		 arr[j+1]=key;
	}
}
int main(){
	
  int arr[]={12,54,68,7,23,9};
	int n=6;
	Traversal(arr,n);
	insertionsort(arr,n);
	Traversal(arr,n);
	return 0;
}
