#include <stdio.h>
int main()
/*{   
    int a=1,b=0;
    b=++a + ++a + ++a;
    printf("a=%d b=%d",a,b);
    return 0;
}*/

  
/*{
    int a=2,c;
    c=a++ + a++ + a++;
    printf("c=%d, a=%d",c,a);
    return 0;
}*/

/*{
    int a=1,b;
    b=a++ + ++a + a++;
    printf("a=%d,b=%d",a,b);
    return 0;
}*/

{
    int a=10;
    printf("%d %d %d",++a,a++,++a);
    return 0;
}

/*{
    int x,y,z;
    x=y=z=1;
    z=++x || ++y && ++z;
    printf("x=%d, y=%d,z=%d\n",x,y,z);
    return 0;
}*/
  // agar number hai other then zero And or OR operator mai to vo by default 1 print krega
