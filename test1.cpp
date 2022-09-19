#include<stdio.h>
int binarysearch(int arr[],int size,int element){
	int low,high,mid;
	high=size;
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
	int element=8;
int x =binarysearch(arr,size,element);
	printf("Element %d was found at index %d",element,x);
	return 0;
}

