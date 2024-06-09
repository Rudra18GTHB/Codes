#include<stdio.h>
#include<stdlib.h>

void display(int[],int);
void heapify(int[],int,int);
void heapsort(int[],int);
void swap(int *,int *);

int main(){
    int arr[10],n,i;
    printf("Enter the number of elements to sort:");
    scanf("%d",&n);
    printf("\nEnter %d elements of the array:",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nUnsorted data is:");
    display(arr,n);
    heapsort(arr,n);
    printf("\nSorted data is:");
    display(arr,n);
}

void display(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("[%d]",arr[i]);
    }
    printf("\n");
}

void heapsort(int arr[],int n){
    int i;
    for(i=(n/2)-1;i>=0;i--){
        heapify(arr,n,i);
    }
    for(i=n-1;i>=0;i--){
        swap(&arr[0],&arr[i]);
        heapify(arr,i,0);
    }
}

void heapify(int arr[],int n,int i){
    int max=i;
    int leftchild=2*i+1;
    int rightchild=2*i+2;
    if(leftchild<n && arr[leftchild]>arr[max])
        max=leftchild;
    if(rightchild<n && arr[rightchild]>arr[max])
        max=rightchild;
    if(max!=i){
        swap(&arr[i],&arr[max]);
    heapify(arr,i,max);
    }
}

void swap(int *a,int*b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

//O(nlogn)