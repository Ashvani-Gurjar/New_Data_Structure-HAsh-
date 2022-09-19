#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int Solution(int arr[],int x,int y){
    sort(arr,arr+x);
    int sum=0,b=0;
    for(int i=x;i>0;i--){
        sum=sum+arr[i];
        if(sum>=y){
            b++;
        }
    }
    return y-b;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int arr[x];
	    for(int i=1;i<=x;i++){
	        cin>>arr[i];
	    }
	    int a= Solution(arr,x,y);
	    cout<<a<<endl;
	}
	return 0;
}

