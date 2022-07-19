#include<stdio.h>
#include<stdlib.h>
struct queue{
    int size;
    int f;
    int r;
    int* arr;

};
 int isEmpty(struct queue *q){
     if(q->r==q->f){
         return 1;

     }
     return 0;
 }

int isFull(struct queue *q){
    if(q->r==q->size-1){
        return 1;

    }
    return 0;

}
int dequeue(struct queue *q){
    int a = -1;
    if(isEmpty(q)){
        printf("This queue is empty");

    }
    else{
        q->f++;
        a=q->arr[q->f];
    }
    return a;
}
void enqueue(struct queue *q,int val){
    if(isFull(q)){
        printf("This queue is full");

    }
    else
    {
        q->r++;
        q->arr[q->r]=val;
    }
}
int main(){
struct queue q;
q.size =100;
q.f =q.r =-1;
q.arr =(int*) malloc(q.size*sizeof(int));
    if(isEmpty(&q)){
        printf("Queue is empty");

    }
    // Enqueue few elements
enqueue(&q,12);
enqueue(&q,15);
enqueue(&q,1);
printf("Dequeuing element %d\n",dequeue(&q));
printf("Dequeuing element %d\n",dequeue(&q));

if(isEmpty(&q)){
        printf("Queue is empty\n");
        
    }
    if(isFull(&q)){
        printf("Queue is full\n");
    }
    return 0;
}