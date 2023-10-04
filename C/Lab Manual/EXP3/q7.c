#include <stdio.h>
int main()
{
    int fn,i,sum=1;
    printf("Enter the number: ");
    scanf("%d",&fn);
    for (i=1;i<=fn;i++){
        sum*=i;
    }
    printf("factorial is %d",sum);
    return 0;
}