#include <stdio.h>
int main()
{
    int data[]={32,71,12,45,26},i,step,n=5;
    int ccount=0, scount=0;
    for(step = 0; step < n-1; step++){
        for(i=0; i<n-step-1; i++){
            if(data[i]>data[i+1]){
                data[i]+=data[i+1];
                data[i+1]=data[i]-data[i+1];
                data[i]-=data[i+1];
                ++scount;
            }
            ++ccount;
        }
    }
    for(i=0; i<n; ++i){
        printf("%d ",data[i]);
    }
    printf("\nTotal Number of swappings: %d\n",scount);
    printf("Total Number of comparisons: %d",ccount);
    return 0;
}

//O(n^2)