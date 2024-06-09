#include<stdio.h>
#include<stdlib.h>

void count(int a[],int k,int n){
    int i,j;
    int b[15],c[100];
    for(i=0;i<=k;i++){
        c[i]=0;
    }
    for(j=1;j<=n;j++){
        c[a[j]]=c[a[j]]+1;
    }
    for(i=1;i<=k;i++){
        c[i]=c[i]+c[i-1];
    }
    for(j=n;j>=1;j--){
        b[c[a[j]]]=a[j];
        c[a[j]]=c[a[j]]-1;
    }
    printf("\nSorted array is:");
    for(i=1;i<=n;i++){
        printf("[%d]",b[i]);
    }
}

int main(){
    int i;
    int n,k=0,a[15];
    printf("\nEnter the number of elements:");
    scanf("%d",&n);
    printf("\nEnter the element to be sorted:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]>k){
            k=a[i];
        }
    }
    printf("Largest element is:%d",k);
    count(a,k,n);
}

//O(n)