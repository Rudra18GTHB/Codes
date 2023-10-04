#include <stdio.h>
int fact(int x)
{
    if (x>1){
        return x*fact(x-1);
    }
}

int main()
{
    int n,ans;
    printf("enter number: ");
    scanf("%d",&n);
    ans=fact(n);
    printf("Factorial is: %d",ans);
    return 0;
}