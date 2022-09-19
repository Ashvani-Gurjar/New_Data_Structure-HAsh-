#include<stdio.h>
#include<stdlib.h>
void printArray(int * A,int n){
	for(int i=0;i<n;i++){
		printf("%d ",A[i]);
	}
	printf("\n");
}
void SelectionSort(int *A ,int n){
       int indexofMin,temp;
       for(int i=0;i<n-1;i++){
       	indexofMin=i;
       	for(int j=i+1;j<n;j++){
       		if(A[j]<A[indexofMin]){
       			indexofMin =j;
			   }
		   }
		   temp=A[i];
		   A[i]=A[indexofMin];
		   A[indexofMin]=temp;
	   }
}
int main(){
	int A[]={5,4,3,6,7,3,2,6,7,8};
	int n=10;
	printf("Giving Array\n");
	printArray(A,n);
    SelectionSort(A,n);
	printf("After Sorting\n");
	printArray(A,n);
	return 0;
}
