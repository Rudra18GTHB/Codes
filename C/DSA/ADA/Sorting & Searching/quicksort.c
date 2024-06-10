#include <stdio.h>

void quicksort(int[], int, int);
int partition(int[], int, int);
void swap(int[], int, int);

int main(){
    int n,i;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the values of the array:");
    for(i=0;i<n;i++){
        scanf("\n%d",&a[i]);
    }
    printf("Array before sorting: ");
    for(i=0;i<n;i++){
        printf("%d ", a[i]);
    }
    quicksort(a,0,n-1);
    printf("After sorting:\n");
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}

void quicksort(int a[], int low, int high){
    int m;
    if(low<high){
        m=partition(a, low, high);
        quicksort(a, low, m-1);
        quicksort(a, m+1, high);
    }
}

int partition(int a[], int low,int high){
    int pivot = a[high];
    int i = low-1;
    for(int j=low; j<=high-1; j++){
        if(a[j]<pivot){
            i++;
            swap(a,i,j);
        }
    }
    swap(a,i+1,high);
    return i+1;
}

void swap(int arr[],int a,int b){
    int temp;
    temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}

//O(nlogn)