#include<bits/stdc++.h>
using namespace std;
struct queue1{
	int size;
	int f;
	int r;
	int *arr;
};
int isEmpty(struct queue1 *ptr ){
	if(ptr->r==ptr->f ){
		return 1;
	}
	return 0;
}
int isFull(struct queue1 *ptr ){
	 if(ptr->r==ptr->size-1){
	 	return 1;
	 }
	 return 0;
}
void enqueue1(struct queue1 *ptr,int val){
	if(isFull(ptr)){
		cout<<"Queue1 is overflow";
	}
	else{
		ptr->r++;
		ptr->arr[ptr->r]=val;
		// cout<<"Enqueue1 element"<< val<<endl;
	}
}
int dequeue1(struct queue1 *ptr){
	int val=-1;
	if(isEmpty(ptr)){
		cout<<"Queue1 is Underflow";
	}
	else{
   	 ptr->f++;
	 val=ptr->arr[ptr->f];
}
	return val;
}
int main(){
	struct queue1 * sp=(struct queue1 *)malloc(sizeof(struct queue1));
	sp->size =400;
	sp->f=sp->r=0;
	sp->arr=(int *)malloc(sp->size *sizeof(int ));
	

     int node;
     int i=0;
     int visited [7] = {0,0,0,0,0,0,0};
     int a[7][7]= {
          {0,1,1,1,0,0,0},
          {1,0,1,0,0,0,0},
          {1,1,0,1,1,0,0},
          {1,0,1,0,1,0,0},
          {0,0,1,1,0,1,1},
          {0,0,0,0,1,0,0},
          {0,0,0,0,1,0,0}
     };

     cout<<i;
     visited[i] = 1;
     enqueue1(sp,i);
     while(!isEmpty(sp)){
          int node = dequeue1(sp);
          for(int j=0;j<7;j++){
               if(a[node][j]==1 && visited[j]==0){
                    cout<<j;
                    visited[j]=1;
                    enqueue1(sp,j);
               }
          }
     }
 
	
	
	return 0;
}










