#include <stdio.h>
int main()
{
    int n,sum=1;
    printf("Enter the number: ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        sum*=i;
    }
    printf("Factorial of %d is %d: ",n,sum);
    return 0;
}