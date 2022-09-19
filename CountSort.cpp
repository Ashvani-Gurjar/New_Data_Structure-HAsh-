#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
void printArray(int * A,int n){
	for(int i=0;i<n;i++){
		printf("%d ",A[i]);
	}
	printf("\n");
}

int maximun(int A[],int n){
	int max=INT_MIN;
	for(int i=0;i<n;i++){
		if(max<A[i]){
			max=A[i];
		}
	}
	return max;
}
void countSort(int A[] ,int n)
{
       int i,j;
       int max=maximun(A,n);
       int *count=(int *)malloc((max+1)*sizeof(int));
       for(i=0;i<max+1;i++){
       	count[i]=0;
	   }
	   for(int i=0;i<n;i++){
	   	count[A[i]] =count[A[i]]+1;
	   }
	   i=0;
	    j=0;
	   while(i<=max){
	   	if(count[i]>0){
	   		A[j]=i;
	   		count[i]=count[i]-1;
	   		j++;
		   }
		   else{
		   	i++;
		   }
	   }
    }
int main(){
	int A[]={5,4,7,9,3,2,1,4};
	int n=8;
	printf("Giving Array\n");
	printArray(A,n);
    countSort(A,n);
	printf("After Sorting\n");
	printArray(A,n);
	return 0;
}
