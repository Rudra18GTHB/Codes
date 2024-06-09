#include<stdio.h>
#include<stdlib.h>

int arr[50];
int merge_sort(int[],int,int,int);
int partition(int arr[],int low,int high){
    int mid;
    if(low<high){
        mid=(low+high)/2;
        partition(arr,low,mid);
        partition(arr,mid+1,high);
        merge_sort(arr,low,mid,high);
    }
}

int merge_sort(int arr[],int low, int mid, int high){
    int i,j,k,l,b[50];
    l=low;
    i=low;
    j=mid+1;
    while((l<=mid) && (j<=high)){
        if(arr[l]<=arr[j]){
            b[i]=arr[l];
            l++;
        }
        else{
            b[i]=arr[j];
            j++;
        }
        i++;
    }
    if(l>mid){
        for(k=j;k<=high;k++){
            b[i]=arr[k];
            i++;
        }
    }
    else{
        for(k=l;k<=mid;k++){
            b[i]=arr[k];
            i++;
        }
    }
    for(i=low;i<=high;i++){
        arr[i]=b[i];
    }
}

int main(){
    int n,i;
    printf("Enter the length of the array:");
    scanf("%d",&n);
    printf("Enter the data:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nBefore sorting:\n");
    for(i=0;i<n;i++){
        printf("[%d]",arr[i]);
    }
    partition(arr,0,n);
    printf("\nAfter sorting:\n");
    for(i=1;i<=n;i++){
        printf("[%d]",arr[i]);
    }
}