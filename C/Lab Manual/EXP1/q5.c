#include <stdio.h>

int main()
/*{
    int a,b;
    a=6;
    b=7;
    b=a+b;
    a=b-a;
    b=b-a;
    printf("%d %d",a,b);
    return 0;
}*/
{
    int a,b,temp;
    a=6;
    b=7;
    temp=a;
    a=b;
    b=temp;
    printf("%d %d",a,b);
    return 0;
}