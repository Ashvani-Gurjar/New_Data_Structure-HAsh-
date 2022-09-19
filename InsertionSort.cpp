#include<stdio.h>
#include<stdlib.h>
void printArray(int * A,int n){
	for(int i=0;i<n;i++){
		printf("%d ",A[i]);
	}
	printf("\n");
}
void InsertionSort(int *A ,int n){
       int key,j;
    for(int i=1;i<n;i++){
      key=A[i];
	  j	=i-1;
	  while(j>=0 && A[j]>key){
	  	A[j+1]=A[j];
	  	j--;
	  }
	  A[j+1]=key;
	}
}
int main(){
	int A[]={5,4,3,6,7,3,2,6,7,8};
//	int A[]={1,2,3,4,5,6,7};
	int n=10;
	printf("Giving Array\n");
	printArray(A,n);
    InsertionSort(A,n);
	printf("After Sorting\n");
	printArray(A,n);
	return 0;
}
