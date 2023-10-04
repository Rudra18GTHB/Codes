#include <stdio.h>
int greater(int a, int b){
    if (a>b){
        printf("Maximum is: %d\n",a);
        printf("Minimum is: %d",b);
    }
    else{
        printf("Maximum is: %d\n",b);
        printf("Minimum is: %d",a);
    }
}
int main()
{
    int a,b,ans;
    printf("Enter the elements: ");
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    greater(a,b);
    return 0;
}