#include <stdio.h>

int binary_converter(int n){
    int i=0,binaryNum[32];
    while (n > 0) {
        binaryNum[i] = n % 2;
        n=n / 2;
        i++;
    }
    printf("Binary number: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryNum[j]);
    }
    printf("\n");

}
int main()
{
    int n,ans;
    printf("Enter the number: ");
    scanf("%d",&n);
    binary_converter(n);
    return 0;
}