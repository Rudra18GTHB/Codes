#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[] ={56,23,78,23,97};
    int element_to_search=97,count=0;
    for(int i=0;i<5;i++){
        ++count;
        if(arr[i]==element_to_search){
            printf("Element found at index %d",i);
            printf("\nTotal Number of comparisons: %d",count);
            return 0;
        }
    }
    printf("Element Not Found");
    return 0;
}
