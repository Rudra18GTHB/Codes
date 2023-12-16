#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[] ={56,23,78,23,97};
    int element_to_search=97;
    for(int i=0;i<5;i++){
        if(arr[i]==element_to_search){
            printf("Element found at index %d",i);
            return 0;
        }
    }
    printf("Element Not Found");
    return 0;
}
