#include<bits/stdc++.h>
using namespace std;
void Traversal(int *arr,int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int maximun(int arr[],int x){
	int max=INT_MIN;
	for(int i=0;i<x;i++){
		if(max<arr[i]){
		 max=arr[i];
	}
	}
	return max;
}

void sort(int arr[],int x){
	int i,j;
	int max=maximun(arr,x);
	cout<<max<<endl;
	int *count =(int *)malloc((max+1)*sizeof(int ));
	for(int i=0;i<max+1;i++){
		count[i]=0;
	}
	for(int i=0;i<x;i++){
		count[arr[i]]=count[arr[i]]+1;
	}
	i=0;
	j=0;
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
	int arr[]={5,4,7,9,3,2,1,4};
	int n=8;
	Traversal(arr,n);
	sort(arr,n); 
	cout<<"After Traversal"<<endl;
	Traversal(arr,n);
	return 0;
}
