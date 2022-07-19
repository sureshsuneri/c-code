#include<stdio.h>
#include<stdlib.h>
struct Node *f =NULL;
    struct Node *r = NULL;
struct Node{
    int data;
    struct Node * next;
};

void linkeListTraversal(struct Node *ptr){
    printf("Printting the elements of this liked list\n");

    while(ptr!=NULL){
        printf("Element: %d\n",ptr->data);
        ptr= ptr->next;

    }
}
void enqueue( int val){
    struct Node *n =(struct Node *) malloc(sizeof(struct Node));
    if(n==NULL){
        printf("Queue is FUll");

    }
    else{
        n->data = val;
        n->next = NULL;
        if(f==NULL){
            f=r=n;
        }
        else{
            r->next =n;
            r=n;

        }
    }
}
int dequeue(){
    int val =-1;
    struct Node *ptr =f;
    if(f==NULL){
        printf("Queue is empty");

    }
    else{
        f =f->next;
        val = ptr->data;
        free(ptr);

    }
    return val;

}
int main(){
   
    linkeListTraversal(f);
    printf("Dequeuing element %d\n",dequeue());

enqueue(34);
enqueue(4);
enqueue(70);
enqueue(17);
    printf("Dequeuing element %d\n",dequeue());
    printf("Dequeuing element %d\n",dequeue());
    printf("Dequeuing element %d\n",dequeue());
    printf("Dequeuing element %d\n",dequeue());

linkeListTraversal(f);

    return 0;

}