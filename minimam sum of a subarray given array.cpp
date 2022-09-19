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
void Solution(int arr[],int x,int y){
    int temp=minSubarraySum(arr,0,y);
	int max,m;
    for(int i=0;i<x-y+1;i++){
           m=i;
          max=minSubarraySum(arr,m,y);
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
