#include <stdio.h>

int main()
{
    int a[]={63,79,6,100,56};
    int n=5;
    int key,j;
    for (int i = 1; i < n; i++)
    {
        key=a[i];
        j=i;
        while(j>=0 && a[j-1]>key){ //Checking two conditions the previous elemnt is larger or not and stop the loop if reaching at the end
            a[j]=a[j-1]; 
            j--;   //Decrementing to check with next previous element
        }
        a[j]=key;
    }
    for (int k = 0; k < n; k++)
    {
        printf("%d ", a[k]);
    }
    return 0;
}
