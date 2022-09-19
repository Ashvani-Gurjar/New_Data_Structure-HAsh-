#include<stdio.h>
int binarysearch(int arr[],int size,int element){
	int low,high,mid;
	low=0;
	high=size-1;
	while(low<=high){
		mid=(low+high)/2;
		if(arr[mid]==element){
			return mid;
		}
		if(arr[mid]<element){
			low=mid+1;
		}
		else{   
		high=mid-1;}
	}
	return -1;
}
int main(){
	int arr[13]={2,3,4,8,6,7};
	int size=6;
	int element=6;
int x =binarysearch(arr,size,element);
	printf("Element %d was found at index %d",element,x+1);
	return 0;
}

