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
void Insertion(struct node *root,int key){
    struct node *  prev= NULL;
    while(root!=NULL){
     prev=root;
     if(key==root->data){
          cout<<"Can't insert"<<key<<"already in BST"<<endl;
           break;
     }
     else if(key<root->data){
          root=root->left;
     }
     else{
          root=root->right;
     }
     }
     struct node * new1 = createnode(key);
     if(key<prev->data){
          prev->left=new1;
     }
     else{
          prev->right=new1;
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

   Insertion(p,9);
   cout<<p->right->right->right->data;
return 0;

}


