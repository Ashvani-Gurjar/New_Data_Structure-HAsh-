#include<bits/stdc++.h>
using namespace std;
int minSubarraySum(int arr[],int m, int k) 
{   
     int sum=0;
    for(int i=m;i<k+m;i++){
         sum=sum+arr[i];
    }
    return sum;
    
}
void Solution(int arr[],int x,int k){
    int temp=minSubarraySum(arr,0,k);
	int max,m;
    for(int i=0;i<x-k+1;i++){
           m=i;
          max=minSubarraySum(arr,m,k);
//          cout<<max<<endl;
    if(temp>max){
        temp=max;
    }}
   cout<<temp<<endl;
}
int main(){
    int x,y;
    cin>>x>>y;
    int arr[x];
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    Solution(arr,x,y);
}
