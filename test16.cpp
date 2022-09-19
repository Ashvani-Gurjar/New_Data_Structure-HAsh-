#include<bits/stdc++.h>
using namespace std;
void Traversal(int arr[],int x){
	for(int i=0;i<x;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int maximum(int *arr,int x){
   int max=INT_MIN;
   for(int i=0;i<x;i++){
   	    if(max<arr[i]){
   	    	max=arr[i];
		   }
   }
   return max;
}
void mergesort(int *arr,int n){
      int i,j;
    int max=maximum(arr,n);
    int *count=(int *)malloc((max+1)*sizeof(int ));
    for(int i=0;i<max+1;i++){
    	count[i]=0;
	}
	for(int i=0;i<n;i++){
		count[arr[i]]=count[arr[i]]+1;
	}
	i=0;j=0;
	while(i<=max){
		if(count[i]>0){
			arr[j]=i;
			count[i]=count[i]-1;
			j++;
		}
		else{
			i++;
		}
	}
}
int main(){
	int arr[]={7,4,5,9,3,2,1};
	int n=7;
	Traversal(arr,n);
	cout<<"After Sorting"<<endl;
	mergesort(arr,n);
	Traversal(arr,n);
	return 0;
}
