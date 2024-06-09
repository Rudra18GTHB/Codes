#include<stdio.h>
#include<stdlib.h>

void quicksort(int[], int, int);
void swap(int[],int,int);
int partition(int a[],int,int,int);

int main(){
    int n,i;
    printf("Enter the length of the array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array:");
    for(i=0;i<n;i++){
        printf("\nEnter element %d:",i);
        scanf("\n%d",&a[i]);
    }
    printf("Array before sorting:\n");
    for(i=0;i<n;i++){
        printf("[%d]",a[i]);
    }
    printf("\n");
    quicksort(a,0,n-1);
    printf("\nArray after sorting:\n");
    for(i=0;i<n;i++){
        printf("[%d]",a[i]);
    }
}

void quicksort(int a[],int low,int high){
    if(low<high){
        int pi=low+rand()%(high-low+1);
        pi=partition(a,low,high,pi);
        quicksort(a,low,pi-1);
        quicksort(a,pi+1,high);
    }
}

int partition(int a[],int low, int high, int pi){
    int temp=a[pi];
    a[pi]=a[low];
    a[low]=temp;
    int pivot=a[low],i=low,j=high;
    while(i<=j){
        while(a[i]<=pivot) i++;
        while(a[j]>pivot) j--;
        if(i<j){
            swap(a,i,j);
        }
    }
    swap(a,low,j);
    return j;
}

void swap(int a[],int i,int j){
    int temp;
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}

//O(nlogn)