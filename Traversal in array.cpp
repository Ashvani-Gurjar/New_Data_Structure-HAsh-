#include<stdio.h>
void Traversal(int arr[],int n){
	for(int i=0;i<n;i++){
		printf("%d",arr[i]);
	}
			printf("\n");
	}
int main(){
	int arr[100]={2,4,3,6,4,3};
	Traversal(arr,6);
	return 0;
}
