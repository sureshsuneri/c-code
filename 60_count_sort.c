#include<stdio.h>
#include<malloc.h>
int maximum(int A[],int n){
    int max =INT_MIN:
    for(int i=0;i<n;i++){
        if(max<A[i]){
            max =A[i]
        }
    }
    return max;
}
void countSort(int *A, int n){
    //Find the maximum element in A
    int max= maximum(A,n);
    int *count =(int *)mallox((max+1)*sizeof(int));
    

}
int main(){

    int A[] ={9,1,4,14,4,15,6};
    int n =7;
    printArray(A,n);
    countSort(A,n);
    printArray(A,n);
    return 0;
}