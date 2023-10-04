#include <stdio.h>

int power(int base,int exponent);

int main()
{
    int base_num,expo_num;
    printf("Enter the base number:\n");
    scanf("%d\n",&base_num);
    scanf("%d",&expo_num);
    int ans=power(base_num,expo_num);
    printf("Answer: %d",ans);
    return 0;
}

int power(int base, int exponent){
    if (exponent==0){
        return 1;
    }
    if (exponent>1){
        return base * power(base, exponent - 1);
    } 
}