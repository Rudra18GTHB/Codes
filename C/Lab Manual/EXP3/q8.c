#include <stdio.h>

int main()
{
    int a=0,b=1,n,c;
    printf("Enter the limit: ");
    scanf("%d",&n);
    printf("%d %d ",a,b);
    for (int i=0;i<n-2;i++){
        c=a+b;
        a=b;
        b=c;
        printf("%d ",b);
    }
    return 0;
}
