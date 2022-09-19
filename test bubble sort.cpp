#include<stdio.h>
void Traversal(int *arr,int n){
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
void bubblesort(int *arr,int n){

   int temp;
    for(int i=0;i<n-1;i++){
    	for(int j=0;j<n-i-1;j++){
    		if(arr[j]>arr[j+1]){
    			temp=arr[j];
    			arr[j]=arr[j+1];
    			arr[j+1]=temp;
			}
		}
	}
}
int main(){
	
  int arr[]={3,8,6,4,6,7,2};
	int n=7;
	Traversal(arr,n);
	bubblesort(arr,n);
	Traversal(arr,n);
	return 0;
}
