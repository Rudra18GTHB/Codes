#include <stdio.h>
int main()
{
    int d,i=0,binary[100];
    printf("Enter decimal number: ");
    scanf("%d",&d);
    while(d>0){
        binary[i]=d%2;
        d=d/2;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        printf("%d",binary[j]);

    }

    return 0;
}
