#include<bits/stdc++.h>
using namespace std;
struct node {
     int data;
     struct node *left ;
     struct node *right;
};
struct node * createnode(int data){
struct node * n=(struct node*)malloc(sizeof(struct node));
     n->data=data;
     n->left=NULL;
     n->right=NULL;
     return n;
}
struct node * Search(struct node *root ,int key){
     if(root==NULL){
          return NULL;
     }
     if(key==root->data){
          return root;
     }
     else if(key<root->data){
          return Search(root->left,key);
     }
     else{
         return Search(root->right,key);
     }  
      

}
int main(){
     struct node * p=createnode(4);
     struct node * p1=createnode(2);
     struct node * p2=createnode(6);
     struct node * p3=createnode(1);
     struct node * p4=createnode(3);
     struct node * p5=createnode(5);
     struct node * p6=createnode(7);

     p->left=p1;
     p->right=p2;
     p1->left=p3;
     p1->right=p4;
     p2->left=p5;
     p2->right=p6;

 struct node * n= Search(p,1);
if(n!=NULL){
cout<<"Found :"<<n->data<<" in tree"<<endl;}
else{
cout<<"key is not found in tree"<<endl;
} 
return 0;

}



