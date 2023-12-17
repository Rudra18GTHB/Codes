#include<stdio.h>
int main()
{
    int a[] = {85,79,6,100,56};
    int min, temp, n = 5;
    for (int i = 0; i < n-1; i++){
        min = i;
        for(int j = i; j<n; j++){
            if (a[j]< a[min]){
                min = j;
            }
        }
        temp=a[min];
        a[min]= a[i];
        a[i] = temp;
    }
    for (int k = 0; k < n; k++)
    {
        printf("%d ", a[k]);
    }
    return 0;
}