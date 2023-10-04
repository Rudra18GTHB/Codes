#include <stdio.h>
int main()
{
    int a,b,temp,*num1,*num2;
    printf("Enter the numbers: ");
    scanf("%d",&a);
    scanf("%d",&b);
    num1=&a,num2=&b;
    temp=*num1;
    *num1=*num2;
    *num2=temp;
    printf("Updated by: ");
    printf("a=%d",a);
    printf("b=%d\n",b);
    return 0;
}