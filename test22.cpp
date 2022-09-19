#include <iostream>
using namespace std;
int max(int a){
    int s,sum=0;
    while(a>0){
        s=a%10;
        sum=sum+s;
        a=a/10;
    }
    return sum;
}
void Solution(int *arr,int x){
    int pre,temp;
    for(int i=0;i<x-1;i++){
        for(int j=i+1;j<x;i++){
            pre=max(i*j);
            if(temp<pre){
                temp=pre;
            }
        }
    }
   cout<<temp<<endl;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    int arr[x];
	    for(int i=0;i<x;i++){
	        cin>>arr[i];
	    }
	    Solution(arr,x);
	}
	return 0;
}

