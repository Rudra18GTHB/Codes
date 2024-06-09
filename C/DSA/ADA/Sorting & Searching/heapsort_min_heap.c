#include<stdio.h>
#include<stdlib.h>

void display(int[],int);
void min_heapify(int[],int,int);
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
    for(i=n-1;i>=0;i--){
        printf("[%d]",arr[i]);
    }
    printf("\n");
}

void heapsort(int arr[],int n){
    int i;
    for(i=(n/2)-1;i>=0;i--){
        min_heapify(arr,n,i);
    }
    for(i=n-1;i>=0;i--){
        swap(&arr[0],&arr[i]);
        min_heapify(arr,i,0);
    }
}

void min_heapify(int arr[],int n,int i){
    int min=i;
    int leftchild=2*i+1;
    int rightchild=2*i+2;
    if(leftchild<n && arr[leftchild]<arr[min])
        min=leftchild;
    if(rightchild<n && arr[rightchild]<arr[min])
        min=rightchild;
    if(min!=i){
        swap(&arr[i],&arr[min]);
        min_heapify(arr,i,min);
    }
}

void swap(int *a,int*b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

//O(nlogn)