#include<stdio.h>
int max,min;
int arr[100];
void max_min(int i,int j){
    int max1,min1,mid;
    if(i==j){
        max=min=arr[i];
    }
    else{
        if(i==j-1){
            if(arr[i]<arr[j]){
                max=arr[j];
                min=arr[i];
            }
            else{
                max=arr[i];
                min=arr[j];
            }
        }
        else{
            mid=(i+j)/2;
            max_min(i,mid);
            max1=max;
            min1=min;
            max_min(mid+1,j);
            if(max1>max){
                max=max1;
            }
            if(min1<min){
                min=min1;
            }
        }
    }
}

int main(){
    int n,i;
    printf("Enter the length of the array:\n");
    scanf("%d",&n);
    printf("Enter the elements of the array:\n");
    for(i=1;i<n;i++){
        scanf("\n%d\n",&arr[i]);
    }
    max=arr[0];
    min=arr[0];
    max_min(1,n);
    printf("Maximum:%d\n",max);
    printf("Minimum:%d",min);
}

//O(nlogn)