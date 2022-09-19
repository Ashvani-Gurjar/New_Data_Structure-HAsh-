#include<stdio.h>
int BinarySearch(int arr[],int size,int element){
	int low,high,mid;
	low=0;
	high=size-1;
	while(low<=high){
	mid=(low+high)/2;
	if(arr[mid]==element)
		return mid; 

	if(arr[mid]<element)
		low=mid+1;
	
	else
		high=mid-1;
	}	
return -1;
}
int main(){
	int arr[100]={2,3,4,5,6};
	int size=8;
	int element=3;
    int x=	BinarySearch(arr,size,element);
    (x == -1) ? printf("Element is not present"
                            " in array")
                   : printf("Element is present at "
                            "index %d",
                            x);
	return 0;
}
