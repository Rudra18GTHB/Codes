#include <stdio.h>
int main(int argc, char const *argv[])
{
    int first=0;
    int second =1;
    int sum;
    int n, count=2;
    printf("Enter the number of elements you want: ");
    scanf("%d", &n);
    printf("%d %d ",first, second);
    while(count<n){
        sum=first+second;
        first=second;
        second=sum;
        count++;
        printf("%d ",sum);
    }
    return 0;
}
