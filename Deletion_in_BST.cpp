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
void inoderTraversal(struct node * root){
     if(root!=NULL){
          inoderTraversal(root->left);
          cout<<root->data<<" ";
          inoderTraversal(root->right);
     }
}
struct node * inoderProdecessor(struct node * root){
     root=root->left;
     while(root->right!=NULL){
        root=root->right;
     }
     return root;
}
struct node * deleteNode(struct node * root,int value){
     struct node * ipre;
     if(root==NULL){
          return NULL;
     }
     if(root->left==NULL && root->right==NULL){
          free(root);
          return NULL;
     }
     if(value<root->data){
          root->left=deleteNode(root->left,value);
     }
     else if(value>root->data){
          root->right=deleteNode(root->right,value);
     }
     else{
          ipre=inoderProdecessor(root);
          root->data=ipre->data;
          root->left=deleteNode(root->left,ipre->data);
     }
     return root;
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

   inoderTraversal(p);
   deleteNode(p,3);
   cout<<endl;
   inoderTraversal(p);
return 0;

}


