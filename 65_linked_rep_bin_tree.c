#include<stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node*left;
    struct node*right;

};

struct node * createNode(int data){
    struct node *n;
    n =(struct node *) malloc(sizeof(struct node));
    n->data =data;
    n->left =NULL;
    n->left =NULL;

}

int main(){
   /* // Constructing the root node
struct node *p;
p =(struct node *)malloc(sizeof(struct node));
p->data =2;
p->left =NULL;
p->right =NULL;
// constructing the first node
struct node *p1;
p1=(struct node*)malloc(sizeof(struct node));
p1->data =1;
p1->left =NULL;
p1->right =NULL;


// constructing the second node
struct node *p2;
p2=(struct node*)malloc(sizeof(struct node));
p2->data =4;
p2->left =NULL;
p2->right =NULL;

// Linking the root node with left and right childeren
p->left =p1;
p->right =p2;
*/

// constructing the node
struct node *p =createNode(2);
struct node *p1 =createNode(1);
struct node *p2 =createNode(4);

// Linking the root node with left and right children
p->left =p1;
p->right =p2;

    return 0;
}