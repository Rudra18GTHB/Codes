#include <stdio.h>

int main()
{
    int a[]={63,79,6,100,56};
    int n=5;
    int key,j;
    for (int i = 1; i < n; i++)
    {
        key=a[i];
        while(i>=0 && a[i-1]>key){ //Checking two conditions the previous elemnt is larger or not and stop the loop if reaching at the end
            a[i]=a[i-1]; 
            i--;   //Decrementing to check with next previous element
        }
        a[i]=key;
    }
    for (int k = 0; k < n; k++)
    {
        printf("%d ", a[k]);
    }
    return 0;
}

//O(n^2)