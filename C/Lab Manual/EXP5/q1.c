#include <stdio.h>

int add(int a, int b)
{
    int c;
    c=a+b;
    return c;
}

int sub(int a,int b)
{
    int c;
    c=a-b;
    return c;
}

int mul(int a,int b)
{
    int c;
    c=a*b;
    return c;
}

int div(int a,int b)
{
    int c;
    c=a/b;
    return c;
}

int main()
{
    int a,b,c,o;
    printf("Enter two number:\n");
    scanf("%d\n",&a);
    scanf("%d",&b);
    printf("Which operation you want to perform:\n1) Addition\n2) Subtraction\n3) Multiplication\n4) Division\n");
    scanf("%d",&c);
    if(c==1)
    {
        o=add(a,b);
        printf("After operation: %d",o);
    }
    if(c==2)
    {
        o=sub(a,b);
        printf("After operation: %d",o);
    }
    if(c==3)
    {
        o=mul(a,b);
        printf("After operation: %d",o);
    }
    if(c==4)
    {
        o=div(a,b);
        printf("After operation: %d",o);
    }
    return 0;
}