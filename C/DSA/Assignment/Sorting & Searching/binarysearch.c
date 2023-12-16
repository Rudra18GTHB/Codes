#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[]={2,5,8,12,16,23,38,56,72,91};
    int low=0;
    int high=9;
    int searchelement=72;
    while(low<=high){
        int m=low+(high-low)/2;
        if (arr[m]==searchelement){
            printf(" Element is found at index %d",m);
            return 0;
        }

        else{
            if(arr[m] < searchelement){
                low=m+1;
            }

            else{
                high=m-1;
            }
        }
    }
    printf("Element is not found at any index");
    return 0;
}