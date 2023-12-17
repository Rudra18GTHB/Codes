#include <stdio.h>

int main()
{
    int a[]={85,79,6,100,56};
    int n=5;
    int key,j;
    int ccount=0;
    int scount=0;
    for (int i = 1; i < n; i++)
    {
        key=a[i];
        j=i;
        while(j>=0 && a[j-1]>key){
            a[j]=a[j-1];
            j--;
        }
        a[j]=key;
    }
    for (int k = 0; k < n; k++)
    {
        printf("%d ", a[k]);
    }
    return 0;
}
