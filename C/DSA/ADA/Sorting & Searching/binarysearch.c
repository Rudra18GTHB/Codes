#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[]={2,5,8,12,16,23,38,56,72,91};
    int low=0;
    int high=9;
    int searchelement=72;
    int count=0;
    while(low<=high){
        int m=low+(high-low)/2;
        ++count;
        if (arr[m]==searchelement){
            printf(" Element is found at index %d",m);
            printf("\nTotal Number of comparisons: %d",count);
            return 0;
        }

        else{
            ++count;
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

//O(log n)