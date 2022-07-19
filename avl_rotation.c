#include<stdio.h>
#include<stdlib.h>

struct Node{
    int key;
    struct Node *left;
    struct Node *right;
    int height;
};

int getHeight(struct Node *n){
    if(n==NULL)
    return 0;
    return n->height;
}
struct Node *createNode(int key){
    struct Node* node =(struct Node *)malloc(sizeof(struct Node));
    node->key =key;
    node->left =NULL;
    node->right =NULL;
    node->height =1;

    return node;

}

int max(int a,int b){
    return a>b?a:b;
}
int getBalanceFactor(struct Node * n){
    if(n==NULL){
        return 0;
    }
    return getHeight(n->left)-getHeight(n->right);

}
struct Node* rightRotate(struct Node* y){
    struct Node* x =y->left;
    struct Node* T2 =x->right;
    x->right =y;
    y->left= T2;

    y->height =max(getHeight(y->right),getHeight(y->left))+1;
    x->height = max(getHeight(x->right),getHeight(x->left))+1;

    return x;

}

struct Node* leftRotate(struct Node* x){
    struct Node* y =x->right;
    struct Node* T2=y->left;

    y->left =x;
    x->right =T2;
    y->height =max(getHeight(y->right),getHeight(y->left))+1;
    x->height =max(getHeight(x->right),getHeight(x->left))+1;

    return y;

}

struct Node * insert(struct Node* node,int key){
    if(node == NULL)
    return(createNode(key));
    if(key<node->key)
    node->left = insert(node->left,key);
    else if(key>node->key)
      node->right = insert(node->right,key);
      return node;
node->height = 1+max(getHeight(node->left),getHeight(node->right));

      int bf = getBalanceFactor(node);

      // Left Left Case
      if(bf>1 && key< node->left->key){
          returnrightRotate(node);

      }
      // Right right case 
      if(bf<-1 && key<node->left->key){
          returnleftRotate(node);

      }
      // Left right case
      if(bf>1 && key>node->left->key){
      node->left =leftRotate(node->left);
      returnrightRotate(node);}
      // right left case
      if(bf<-1 && key>node->right->key){
          node->right = rightRotate(node->right);

          returnleftRotate(node);

      return node;

      
}
int main(){
    struct Node * root =NULL;
    root =insert(root,45);
    root = insert(root,4);
    root = insert(root,5);
    root = insert(root,8);
    root =insert(root,9);

    return 0;

}