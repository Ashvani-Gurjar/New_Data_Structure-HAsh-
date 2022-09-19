#include<bits/stdc++.h>
using namespace std;
struct Node {
     int key;
     struct Node *left;
     struct Node *right;
     int height;
};
int getHeight(struct Node * n){
     if(n==NULL){
          return 0;
     }
     return n->height;
}
struct Node * createnode(int key){
     struct Node  * node =(struct Node* )malloc(sizeof(struct Node));
     node->key=key;
     node->left=NULL;
     node->right=NULL;
     node->height=1;
     return node;
}
int getBalanceFactor(struct Node * n){
     if(n==NULL){
          return 0;
     }
     return getHeight(n->left)-getHeight(n->right);
}
struct Node * rightRotation(struct Node * y)
{
     struct Node * x=y->left;
     struct Node * t2=x->right;
     x->right=y;
     y->left=t2;
     y->height=max(getHeight(y->right),getHeight(y->left))+1;
     x->height=max(getHeight(x->right),getHeight(x->left))+1;
     return x;
}
struct Node * leftRotation(struct Node * x)
{
     struct Node * y=x->right;
     struct Node * t2=y->left;
     y->left=x;
     x->right=t2;
     y->height=max(getHeight(y->right),getHeight(y->left))+1;
     x->height=max(getHeight(x->right),getHeight(x->left))+1;
     return y;
}
struct Node * insert(struct Node *node, int key){
     if(node==NULL){
          return createnode(key);
     }
     if((key<node->key)){
          node->left=insert(node->left,key);
      }    
     else if(key>node->key){
         node->right=insert(node->right,key);
     }
     node->height=1+max(getHeight(node->left),getHeight(node->right));
     int bf=getBalanceFactor(node->right);

     if(bf>1 && key<node->left->key){
          return rightRotation(node);
     }
     if(bf<-1 && key > node->right->key){
          return leftRotation(node);
     }
     if(bf>1 && key > node->left->key){
          node->left=leftRotation(node->left);
          return rightRotation(node);
     }
     if(bf <-1 && key < node ->right->key){
          node->right=rightRotation(node->right);
          return leftRotation(node);
     }
return node;
}
int max(int a,int b){
     return a>b?a:b;
}
void preoder(struct Node *root){
     if(root!=NULL){
          cout<<root->key<<" ";
          preoder(root->left);
          preoder(root->right);
     }
}
int main(){
     struct Node * root=NULL;
     root=insert(root,1);
     root=insert(root,2);
     root=insert(root,4);
     root=insert(root,5);
     root=insert(root,6);
     root=insert(root,3);
     
     preoder(root);
     return 0;
}
