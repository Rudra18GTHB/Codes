#include <stdio.h>
int main()
/*{
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}*/

/*{
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            printf("%d ",i*j);
        }
        printf("\n");
    }
    return 0;
}*/

/*{
    for (int i=1;i<=4;i++){
        for (int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}*/

/*{
    int n;
    for (int i=1;i<=5;i++){
        n=5;
        for (int j=1;j<=i;j++){
            printf("%d ",n);
            n-=1;
        }
        printf("\n");
    }
    return 0;
}*/

/*{
    for (int i=1;i<=5;i++){
        for (int j=1;j<=6-i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}*/

{
    int n=1;
    for (int i=1;i<=4;i++){
        for (int j=1;j<=i;j++){
            printf("%d ",n);
            n+=1;
        }
        printf("\n");
    }
    return 0;
}