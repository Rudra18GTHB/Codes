#include <stdio.h>

int Quicksort(int arr[], int l, int r){
    int yellow, green;
    if(r-l<=1){
        return 0;
    }
    yellow = l+1;
    for(green = l+1; green <r ; green++){
        if(arr[green]<= arr[l]){
            swap(arr,l,yellow-1);

        }
    }
}


int main()
{
    
    return 0;
}
