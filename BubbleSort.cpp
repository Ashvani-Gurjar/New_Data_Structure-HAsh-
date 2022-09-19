#include<stdio.h>
void printArray(int * A,int n){
	for(int i=0;i<n;i++){
		printf("%d ",A[i]);
	}
	printf("\n");
}
void BubbleSort(int *A ,int n){
	int temp;
	for(int i=0;i<n-1;i++){
		printf("%d\n",i);
		for(int j=0;j<n-i-1;j++){
			if(A[j]>A[j+1]){
				temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
			}
		}
	}
}
void BubbleSortAdaptive(int A[],int n){
		int temp;
		int isSort=0;
	for(int i=0;i<n-1;i++){
		isSort=1;
		printf("%d\n",i);
		for(int j=0;j<n-i-1;j++){
			if(A[j]>A[j+1]){
				temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
				isSort=0;
			}
		}
		if(isSort){
			return ;
		}
	}
}
int main(){
//	int A[]={5,4,3,6,7,3,2};
	int A[]={1,2,3,4,5,6,7};
	int n=7;
	printf("Giving Array\n");
	printArray(A,n);
//	BubbleSort(A,n);
	BubbleSortAdaptive(A,n);
	printf("After Sorting\n");
	printArray(A,n);
	return 0;
}
